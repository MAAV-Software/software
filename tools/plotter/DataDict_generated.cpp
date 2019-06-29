// clang-format off
/**
 * 	AUTOGENERATED FILE!! DO NOT EDIT!!!!
 */


#include "DataDict.hpp"
#include "AbstractData.hpp"
#include "GaussianData.hpp"
#include "QuaternionData.hpp"

void DataDict::initializeDictionary_generated()
{
	dict["PID_ERROR_pos_error"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"pos_error_x", "pos_error_y", "pos_error_z"}));
	dict["PID_ERROR_vel_error"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"vel_error_x", "vel_error_y", "vel_error_z"}));
	dict["PID_ERROR_thrust"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"thrust_x"}));
	dict["PID_ERROR_yaw_error"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"yaw_error_x"}));
	dict["PID_ERROR_pitch"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"pitch_x"}));
	dict["PID_ERROR_roll"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"roll_x"}));
	dict["SIM_IMU_acceleration"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"acceleration_x", "acceleration_y", "acceleration_z"}));
	dict["SIM_IMU_angular_rates"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"angular_rates_x", "angular_rates_y", "angular_rates_z"}));
	dict["SIM_IMU_magnetometer"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"magnetometer_x", "magnetometer_y", "magnetometer_z"}));
	dict["GT_SLAMDRIFT_attitude_drift"] = std::shared_ptr<QuaternionData>(new QuaternionData({"attitude_drift_roll", "attitude_drift_pitch", "attitude_drift_yaw"}));
	dict["GT_SLAMDRIFT_position_drift"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_pos_drift_x", "gt_pos_drift_y", "gt_pos_drift_z"}));
	dict["GT_WORLD_gravity"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_grav_x", "gt_grav_y", "gt_grav_z"}));
	dict["GT_WORLD_magnetic_field"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_mag_x", "gt_mag_y", "gt_mag_z"}));
	dict["IMU_acceleration"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"acceleration_x", "acceleration_y", "acceleration_z"}));
	dict["IMU_angular_rates"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"angular_rates_x", "angular_rates_y", "angular_rates_z"}));
	dict["IMU_magnetometer"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"magnetometer_x", "magnetometer_y", "magnetometer_z"}));
	dict["HEIGHT_LIDAR_distance"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"distance_x"}));
	dict["GLOBAL_UPDATE_position"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"position_x", "position_y", "position_z"}));
	dict["GLOBAL_UPDATE_attitude"] = std::shared_ptr<QuaternionData>(new QuaternionData({"attitude_roll", "attitude_pitch", "attitude_yaw"}));
	dict["STATE_attitude"] = std::shared_ptr<QuaternionData>(new QuaternionData({"ϕ", "θ", "ψ"}));
	dict["STATE_accel_biases"] = std::shared_ptr<GaussianData>(new GaussianData(3, {"abias_x", "abias_y", "abias_z"}));
	dict["STATE_velocity"] = std::shared_ptr<GaussianData>(new GaussianData(3, {"vel_x", "vel_y", "vel_z"}));
	dict["STATE_angular_velocity"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"ω_x", "ω_y", "ω_z"}));
	dict["STATE_gravity"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"grav_x", "grav_y", "grav_z"}));
	dict["STATE_position"] = std::shared_ptr<GaussianData>(new GaussianData(3, {"pos_x", "pos_y", "pos_z"}));
	dict["STATE_gyro_biases"] = std::shared_ptr<GaussianData>(new GaussianData(3, {"gbias_x", "gbias_y", "gbias_z"}));
	dict["STATE_acceleration"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"acc_x", "acc_y", "acc_z"}));
	dict["STATE_covariance"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"covariance_matrix"}));
	dict["STATE_magnetic_field"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"mag_x", "mag_y", "mag_z"}));
	dict["PLANE_FIT_pitch"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"pitch_x"}));
	dict["PLANE_FIT_z_dot"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"z_dot_x"}));
	dict["PLANE_FIT_z"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"z_x"}));
	dict["PLANE_FIT_roll"] = std::shared_ptr<AbstractData>(new AbstractData(1, {"roll_x"}));
	dict["GT_INERTIAL_attitude"] = std::shared_ptr<QuaternionData>(new QuaternionData({"attitude_roll", "attitude_pitch", "attitude_yaw"}));
	dict["GT_INERTIAL_position"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_pos_x", "gt_pos_y", "gt_pos_z"}));
	dict["GT_INERTIAL_velocity"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_vel_x", "gt_vel_y", "gt_vel_z"}));
	dict["GT_INERTIAL_angular_velocity"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_ω_x", "gt_ω_y", "gt_ω_z"}));
	dict["GT_INERTIAL_acceleration"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_acc_x", "gt_acc_y", "gt_acc_z"}));
	dict["GT_IMU_accel_bias"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_accel_bias_x", "gt_accel_bias_y", "gt_accel_bias_z"}));
	dict["GT_IMU_gyro_bias"] = std::shared_ptr<AbstractData>(new AbstractData(3, {"gt_gyro_bias_x", "gt_gyro_bias_y", "gt_gyro_bias_z"}));
}
