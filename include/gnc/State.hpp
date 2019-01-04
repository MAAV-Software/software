#ifndef STATE_HPP
#define STATE_HPP

#include <cstdint>
#include <ostream>

#include <Eigen/Dense>
#include <sophus/so3.hpp>

namespace maav
{
namespace gnc
{
class State
{
public:
    // TODO: Increase this to estimate more variables
    /**
     * Minimum number of variables needed to parameterize the state
     */
    constexpr static size_t DoF = 9;

    /**
     * Number of sigma points generated by an unscented transform
     */
    constexpr static size_t N = 1 + 2 * DoF;

    using CovarianceMatrix = Eigen::Matrix<double, DoF, DoF>;
    using ErrorStateVector = Eigen::Matrix<double, DoF, 1>;

    State() = default;

    /**
     * @breif Sets time, but leaves all other variables uninitialized
     *
     * @param time_usec Timestamp to initialize this state
     */
    State(uint64_t time_usec);

    /**
     * Initializes position, velocity, angular rates, and biases to zero. Attitude is initialized to
     * the identity rotation. Acceleration and the gravity vector are initialized to standard
     * gravity acceleration. The magnetic field is initialized to Ann Arbor's magnetic field
     * according to NOAA (https://www.ngdc.noaa.gov/geomag-web/#igrfgrid). Covariance is initialized
     * to 1e-5 * identity.
     *
     * @param time_usec Timestamp to initialize this state
     */
    static State zero(uint64_t time_usec);

private:
    static State mean(
        const std::array<State, N>& sigma_points, const std::array<double, N>& weights);

    static CovarianceMatrix cov(const State& mean, const std::array<State, N>& sigma_points,
        const std::array<double, N>& weights);

public:
    /**
     * @brief Computes a weighted gaussian probability distribution for a set of sigma points
     *
     * @param points Transformed sigma points from an unscented transform
     * @param m_weights Mean weights
     * @param c_weights Covariance weights
     * @return A `State` representing the probability distribution
     */
    static State compute_gaussian(const std::array<State, 1 + 2 * DoF>& points,
        const std::array<double, N>& m_weights, const std::array<double, N>& c_weights);

    /**
     * @brief Adds an infinitesmal change to the state
     *
     * @param e_state A small change represented in the tangent space
     */
    State& operator+=(const ErrorStateVector& e_state);

    /**
     * @brief Takes the difference between two states in the tangent space
     *
     * @param other Other state to take the difference
     * @return A small change between two states represented in the tangent space
     */
    ErrorStateVector operator-(const State& other) const;

public:
    const Sophus::SO3d& attitude() const;
    Sophus::SO3d& attitude();

    const Eigen::Vector3d& angularVelocity() const;
    Eigen::Vector3d& angularVelocity();

    const Eigen::Vector3d& position() const;
    Eigen::Vector3d& position();

    const Eigen::Vector3d& velocity() const;
    Eigen::Vector3d& velocity();

    const Eigen::Vector3d& acceleration() const;
    Eigen::Vector3d& acceleration();

    const Eigen::Vector3d& gyroBias() const;
    Eigen::Vector3d& gyroBias();

    const Eigen::Vector3d& accelBias() const;
    Eigen::Vector3d& accelBias();

    const Eigen::Vector3d& gravity() const;
    Eigen::Vector3d& gravity();

    const Eigen::Vector3d& magneticFieldVector() const;
    Eigen::Vector3d& magneticFieldVector();

    const CovarianceMatrix& covariance() const;
    CovarianceMatrix& covariance();

    void setTime(uint64_t time_usec);

    uint64_t timeUSec() const;
    double timeSec() const;

private:
    uint64_t time_usec_;

    Sophus::SO3d attitude_;

    Eigen::Vector3d angular_velocity_;

    Eigen::Vector3d position_;

    Eigen::Vector3d velocity_;

    Eigen::Vector3d acceleration_;

    Eigen::Vector3d gyro_bias_;

    Eigen::Vector3d accel_bias_;

    Eigen::Vector3d gravity_;

    Eigen::Vector3d magnetic_field_;

    CovarianceMatrix covar_;
};

std::ostream& operator<<(std::ostream& os, const State& state);

}  // namespace gnc
}  // namespace maav

#endif