// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "utils/NeoMotors.h"

class ClampSubsystem : public frc2::SubsystemBase {
 public:
  ClampSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void RunClaw(double set);

 private:
   hb::NeoMotor m_motor{11, rev::CANSparkMax::MotorType::kBrushless, rev::CANSparkMax::IdleMode::kBrake};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};