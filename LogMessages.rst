.. Dynamically generated list of Logger Messages
.. This page was generated using Tools/autotest/logger_metdata/parse.py

.. DO NOT EDIT

.. _logmessages:

Onboard Message Log Messages
============================

This is a list of log messages which may be present in logs produced and stored onboard ArduPilot vehicles.


.. _ACC1:

ACC1: IMU accelerometer data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-------------------------------------------------+
| TimeUS   | Time since system startup                       |
+----------+-------------------------------------------------+
| SampleUS | time since system startup this sample was taken |
+----------+-------------------------------------------------+
| AccX     | acceleration along X axis                       |
+----------+-------------------------------------------------+
| AccY     | acceleration along Y axis                       |
+----------+-------------------------------------------------+
| AccZ     | acceleration along Z axis                       |
+----------+-------------------------------------------------+


.. _ACC2:

ACC2: IMU accelerometer data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-------------------------------------------------+
| TimeUS   | Time since system startup                       |
+----------+-------------------------------------------------+
| SampleUS | time since system startup this sample was taken |
+----------+-------------------------------------------------+
| AccX     | acceleration along X axis                       |
+----------+-------------------------------------------------+
| AccY     | acceleration along Y axis                       |
+----------+-------------------------------------------------+
| AccZ     | acceleration along Z axis                       |
+----------+-------------------------------------------------+


.. _ACC3:

ACC3: IMU accelerometer data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-------------------------------------------------+
| TimeUS   | Time since system startup                       |
+----------+-------------------------------------------------+
| SampleUS | time since system startup this sample was taken |
+----------+-------------------------------------------------+
| AccX     | acceleration along X axis                       |
+----------+-------------------------------------------------+
| AccY     | acceleration along Y axis                       |
+----------+-------------------------------------------------+
| AccZ     | acceleration along Z axis                       |
+----------+-------------------------------------------------+


.. _ADSB:

ADSB: Automatic Dependant Serveillance - Broadcast detected vehicle information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------------+-----------------------------+
| TimeUS       | Time since system startup   |
+--------------+-----------------------------+
| ICAO_address | Transponder address         |
+--------------+-----------------------------+
| Lat          | Vehicle latitude            |
+--------------+-----------------------------+
| Lng          | Vehicle longitude           |
+--------------+-----------------------------+
| Alt          | Vehicle altitude            |
+--------------+-----------------------------+
| Heading      | Vehicle heading             |
+--------------+-----------------------------+
| Hor_vel      | Vehicle horizontal velocity |
+--------------+-----------------------------+
| Ver_vel      | Vehicle vertical velocity   |
+--------------+-----------------------------+
| Squark       | Transponder squawk code     |
+--------------+-----------------------------+


.. _AHR2:

AHR2: Backup AHRS data
~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------------+
| TimeUS | Time since system startup                 |
+--------+-------------------------------------------+
| Roll   | Estimated roll                            |
+--------+-------------------------------------------+
| Pitch  | Estimated pitch                           |
+--------+-------------------------------------------+
| Yaw    | Estimated yaw                             |
+--------+-------------------------------------------+
| Alt    | Estimated altitude                        |
+--------+-------------------------------------------+
| Lat    | Estimated latitude                        |
+--------+-------------------------------------------+
| Lng    | Estimated longitude                       |
+--------+-------------------------------------------+
| Q1     | Estimated attitude quaternion component 1 |
+--------+-------------------------------------------+
| Q2     | Estimated attitude quaternion component 2 |
+--------+-------------------------------------------+
| Q3     | Estimated attitude quaternion component 3 |
+--------+-------------------------------------------+
| Q4     | Estimated attitude quaternion component 4 |
+--------+-------------------------------------------+


.. _ARM:

ARM: Arming status changes
~~~~~~~~~~~~~~~~~~~~~~~~~~
+-----------+----------------------------------+
| TimeUS    | Time since system startup        |
+-----------+----------------------------------+
| ArmState  | true if vehicle is now armed     |
+-----------+----------------------------------+
| ArmChecks | arming bitmask at time of arming |
+-----------+----------------------------------+
| Forced    | true if arm/disarm was forced    |
+-----------+----------------------------------+
| Method    | method used for arming           |
+-----------+----------------------------------+


.. _ARSP:

ARSP: Airspeed sensor data
~~~~~~~~~~~~~~~~~~~~~~~~~~
+-----------+-----------------------------------------------------+
| TimeUS    | Time since system startup                           |
+-----------+-----------------------------------------------------+
| Airspeed  | Current airspeed                                    |
+-----------+-----------------------------------------------------+
| DiffPress | Pressure difference between static and dynamic port |
+-----------+-----------------------------------------------------+
| Temp      | Temperature used for calculation                    |
+-----------+-----------------------------------------------------+
| RawPress  | Raw pressure less offset                            |
+-----------+-----------------------------------------------------+
| Offset    | Offset from parameter                               |
+-----------+-----------------------------------------------------+
| U         | True if sensor is being used                        |
+-----------+-----------------------------------------------------+
| Health    | True if sensor is healthy                           |
+-----------+-----------------------------------------------------+
| Hfp       | Probability sensor has failed                       |
+-----------+-----------------------------------------------------+
| Pri       | True if sensor is the primary sensor                |
+-----------+-----------------------------------------------------+


.. _ASM1:

ASM1: AirSim simulation data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------+
| TimeUS | Time since system startup   |
+--------+-----------------------------+
| TUS    | Simulation's timestamp      |
+--------+-----------------------------+
| R      | Simulation's roll           |
+--------+-----------------------------+
| P      | Simulation's pitch          |
+--------+-----------------------------+
| Y      | Simulation's yaw            |
+--------+-----------------------------+
| GX     | Simulated gyroscope, X-axis |
+--------+-----------------------------+
| GY     | Simulated gyroscope, Y-axis |
+--------+-----------------------------+
| GZ     | Simulated gyroscope, Z-axis |
+--------+-----------------------------+


.. _ASM2:

ASM2: More AirSim simulation data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------+
| TimeUS | Time since system startup           |
+--------+-------------------------------------+
| AX     | simulation's acceleration, X-axis   |
+--------+-------------------------------------+
| AY     | simulation's acceleration, Y-axis   |
+--------+-------------------------------------+
| AZ     | simulation's acceleration, Z-axis   |
+--------+-------------------------------------+
| VX     | simulation's velocity, X-axis       |
+--------+-------------------------------------+
| VY     | simulation's velocity, Y-axis       |
+--------+-------------------------------------+
| VZ     | simulation's velocity, Z-axis       |
+--------+-------------------------------------+
| PX     | simulation's position, X-axis       |
+--------+-------------------------------------+
| PY     | simulation's position, Y-axis       |
+--------+-------------------------------------+
| PZ     | simulation's position, Z-axis       |
+--------+-------------------------------------+
| Alt    | simulation's gps altitude           |
+--------+-------------------------------------+
| SD     | simulation's earth-frame speed-down |
+--------+-------------------------------------+


.. _ASP2:

ASP2: Airspeed sensor data
~~~~~~~~~~~~~~~~~~~~~~~~~~
+-----------+-----------------------------------------------------+
| TimeUS    | Time since system startup                           |
+-----------+-----------------------------------------------------+
| Airspeed  | Current airspeed                                    |
+-----------+-----------------------------------------------------+
| DiffPress | Pressure difference between static and dynamic port |
+-----------+-----------------------------------------------------+
| Temp      | Temperature used for calculation                    |
+-----------+-----------------------------------------------------+
| RawPress  | Raw pressure less offset                            |
+-----------+-----------------------------------------------------+
| Offset    | Offset from parameter                               |
+-----------+-----------------------------------------------------+
| U         | True if sensor is being used                        |
+-----------+-----------------------------------------------------+
| Health    | True if sensor is healthy                           |
+-----------+-----------------------------------------------------+
| Hfp       | Probability sensor has failed                       |
+-----------+-----------------------------------------------------+
| Pri       | True if sensor is the primary sensor                |
+-----------+-----------------------------------------------------+


.. _ATDE:

ATDE: AutoTune data packet
~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Angle  | current angle             |
+--------+---------------------------+
| Rate   | current angular rate      |
+--------+---------------------------+


.. _ATT:

ATT: Canonical vehicle attitude
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+------------------------------------------------------+
| TimeUS   | Time since system startup                            |
+----------+------------------------------------------------------+
| DesRoll  | vehicle desired roll                                 |
+----------+------------------------------------------------------+
| Roll     | achieved vehicle roll                                |
+----------+------------------------------------------------------+
| DesPitch | vehicle desired pitch                                |
+----------+------------------------------------------------------+
| Pitch    | achieved vehicle pitch                               |
+----------+------------------------------------------------------+
| DesYaw   | vehicle desired yaw                                  |
+----------+------------------------------------------------------+
| Yaw      | achieved vehicle yaw                                 |
+----------+------------------------------------------------------+
| ErrRP    | lowest estimated gyro drift error                    |
+----------+------------------------------------------------------+
| ErrYaw   | difference between measured yaw and DCM yaw estimate |
+----------+------------------------------------------------------+


.. _ATUN:

ATUN: Copter/QuadPlane AutoTune
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+------------------------------------------------+
| TimeUS   | Time since system startup                      |
+----------+------------------------------------------------+
| Axis     | which axis is currently being tuned            |
+----------+------------------------------------------------+
| TuneStep | step in autotune process                       |
+----------+------------------------------------------------+
| Targ     | target angle or rate, depending on tuning step |
+----------+------------------------------------------------+
| Min      | measured minimum target angle or rate          |
+----------+------------------------------------------------+
| Max      | measured maximum target angle or rate          |
+----------+------------------------------------------------+
| RP       | new rate gain P term                           |
+----------+------------------------------------------------+
| RD       | new rate gain D term                           |
+----------+------------------------------------------------+
| SP       | new angle P term                               |
+----------+------------------------------------------------+
| ddt      | maximum measured twitching acceleration        |
+----------+------------------------------------------------+


.. _BAR2:

BAR2: Gathered Barometer data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+----------------------------------------------------------------------------------+
| TimeUS  | Time since system startup                                                        |
+---------+----------------------------------------------------------------------------------+
| Alt     | calculated altitude                                                              |
+---------+----------------------------------------------------------------------------------+
| Press   | measured atmospheric pressure                                                    |
+---------+----------------------------------------------------------------------------------+
| Temp    | measured atmospheric temperature                                                 |
+---------+----------------------------------------------------------------------------------+
| CRt     | derived climb rate from primary barometer                                        |
+---------+----------------------------------------------------------------------------------+
| SMS     | time last sample was taken                                                       |
+---------+----------------------------------------------------------------------------------+
| Offset  | raw adjustment of barometer altitude, zeroed on calibration, possibly set by GCS |
+---------+----------------------------------------------------------------------------------+
| GndTemp | temperature on ground, specified by parameter or measured while on ground        |
+---------+----------------------------------------------------------------------------------+
| Health  | true if barometer is considered healthy                                          |
+---------+----------------------------------------------------------------------------------+


.. _BAR3:

BAR3: Gathered Barometer data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+----------------------------------------------------------------------------------+
| TimeUS  | Time since system startup                                                        |
+---------+----------------------------------------------------------------------------------+
| Alt     | calculated altitude                                                              |
+---------+----------------------------------------------------------------------------------+
| Press   | measured atmospheric pressure                                                    |
+---------+----------------------------------------------------------------------------------+
| Temp    | measured atmospheric temperature                                                 |
+---------+----------------------------------------------------------------------------------+
| CRt     | derived climb rate from primary barometer                                        |
+---------+----------------------------------------------------------------------------------+
| SMS     | time last sample was taken                                                       |
+---------+----------------------------------------------------------------------------------+
| Offset  | raw adjustment of barometer altitude, zeroed on calibration, possibly set by GCS |
+---------+----------------------------------------------------------------------------------+
| GndTemp | temperature on ground, specified by parameter or measured while on ground        |
+---------+----------------------------------------------------------------------------------+
| Health  | true if barometer is considered healthy                                          |
+---------+----------------------------------------------------------------------------------+


.. _BARO:

BARO: Gathered Barometer data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+----------------------------------------------------------------------------------+
| TimeUS  | Time since system startup                                                        |
+---------+----------------------------------------------------------------------------------+
| Alt     | calculated altitude                                                              |
+---------+----------------------------------------------------------------------------------+
| Press   | measured atmospheric pressure                                                    |
+---------+----------------------------------------------------------------------------------+
| Temp    | measured atmospheric temperature                                                 |
+---------+----------------------------------------------------------------------------------+
| CRt     | derived climb rate from primary barometer                                        |
+---------+----------------------------------------------------------------------------------+
| SMS     | time last sample was taken                                                       |
+---------+----------------------------------------------------------------------------------+
| Offset  | raw adjustment of barometer altitude, zeroed on calibration, possibly set by GCS |
+---------+----------------------------------------------------------------------------------+
| GndTemp | temperature on ground, specified by parameter or measured while on ground        |
+---------+----------------------------------------------------------------------------------+
| Health  | true if barometer is considered healthy                                          |
+---------+----------------------------------------------------------------------------------+


.. _BAT:

BAT: Gathered battery data
~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+----------------------------------+
| TimeUS   | Time since system startup        |
+----------+----------------------------------+
| Instance | battery instance number          |
+----------+----------------------------------+
| Volt     | measured voltage                 |
+----------+----------------------------------+
| VoltR    | estimated resting voltage        |
+----------+----------------------------------+
| Curr     | measured current                 |
+----------+----------------------------------+
| CurrTot  | current * time                   |
+----------+----------------------------------+
| EnrgTot  | energy this battery has produced |
+----------+----------------------------------+
| Temp     | measured temperature             |
+----------+----------------------------------+
| Res      | estimated temperature resistance |
+----------+----------------------------------+


.. _BCL:

BCL: Battery cell voltage information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+---------------------------+
| TimeUS   | Time since system startup |
+----------+---------------------------+
| Instance | battery instance number   |
+----------+---------------------------+
| Volt     | battery voltage           |
+----------+---------------------------+
| V1       | first cell voltage        |
+----------+---------------------------+
| V2       | second cell voltage       |
+----------+---------------------------+
| V3       | third cell voltage        |
+----------+---------------------------+
| V4       | fourth cell voltage       |
+----------+---------------------------+
| V5       | fifth cell voltage        |
+----------+---------------------------+
| V6       | sixth cell voltage        |
+----------+---------------------------+
| V7       | seventh cell voltage      |
+----------+---------------------------+
| V8       | eighth cell voltage       |
+----------+---------------------------+
| V9       | ninth cell voltage        |
+----------+---------------------------+
| V10      | tenth cell voltage        |
+----------+---------------------------+


.. _BCN:

BCN: Beacon informtaion
~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------+
| TimeUS | Time since system startup          |
+--------+------------------------------------+
| Health | True if beacon sensor is healthy   |
+--------+------------------------------------+
| Cnt    | Number of beacons being used       |
+--------+------------------------------------+
| D0     | Distance to first beacon           |
+--------+------------------------------------+
| D1     | Distance to second beacon          |
+--------+------------------------------------+
| D2     | Distance to third beacon           |
+--------+------------------------------------+
| D3     | Distance to fouth beacon           |
+--------+------------------------------------+
| PosX   | Calculated beacon position, x-axis |
+--------+------------------------------------+
| PosY   | Calculated beacon position, y-axis |
+--------+------------------------------------+
| PosZ   | Calculated beacon position, z-axis |
+--------+------------------------------------+


.. _CAM:

CAM: Camera shutter information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+--------------------------------------+
| TimeUS  | Time since system startup            |
+---------+--------------------------------------+
| GPSTime | milliseconds since start of GPS week |
+---------+--------------------------------------+
| GPSWeek | weeks since 5 Jan 1980               |
+---------+--------------------------------------+
| Lat     | current latitude                     |
+---------+--------------------------------------+
| Lng     | current longitude                    |
+---------+--------------------------------------+
| Alt     | current altitude                     |
+---------+--------------------------------------+
| RelAlt  | current altitude relative to home    |
+---------+--------------------------------------+
| GPSAlt  | altitude as reported by GPS          |
+---------+--------------------------------------+
| Roll    | current vehicle roll                 |
+---------+--------------------------------------+
| Pitch   | current vehicle pitch                |
+---------+--------------------------------------+
| Yaw     | current vehicle yaw                  |
+---------+--------------------------------------+


.. _CESC:

CESC: CAN ESC data
~~~~~~~~~~~~~~~~~~
+---------+-----------------------------+
| TimeUS  | Time since system startup   |
+---------+-----------------------------+
| Id      | ESC identifier              |
+---------+-----------------------------+
| ECnt    | Error count                 |
+---------+-----------------------------+
| Voltage | Battery voltage measurement |
+---------+-----------------------------+
| Curr    | Battery current measurement |
+---------+-----------------------------+
| Temp    | Temperature                 |
+---------+-----------------------------+
| RPM     | Measured RPM                |
+---------+-----------------------------+
| Pow     | Rated power output          |
+---------+-----------------------------+


.. _CMD:

CMD: Executed mission command information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------+
| TimeUS | Time since system startup        |
+--------+----------------------------------+
| CTot   | Total number of mission commands |
+--------+----------------------------------+
| CNum   | This command's offset in mission |
+--------+----------------------------------+
| CId    | Command type                     |
+--------+----------------------------------+
| Prm1   | Parameter 1                      |
+--------+----------------------------------+
| Prm2   | Parameter 2                      |
+--------+----------------------------------+
| Prm3   | Parameter 3                      |
+--------+----------------------------------+
| Prm4   | Parameter 4                      |
+--------+----------------------------------+
| Lat    | Command latitude                 |
+--------+----------------------------------+
| Lng    | Command longitude                |
+--------+----------------------------------+
| Alt    | Command altitude                 |
+--------+----------------------------------+
| Frame  | Frame used for position          |
+--------+----------------------------------+


.. _COFS:

COFS: Current compass learn offsets
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------+
| TimeUS | Time since system startup   |
+--------+-----------------------------+
| OfsX   | best learnt offset, x-axis  |
+--------+-----------------------------+
| OfsY   | best learnt offset, y-axis  |
+--------+-----------------------------+
| OfsZ   | best learnt offset, z-axis  |
+--------+-----------------------------+
| Var    | error of best offset vector |
+--------+-----------------------------+
| Yaw    | best learnt yaw             |
+--------+-----------------------------+
| WVar   | error of best learn yaw     |
+--------+-----------------------------+
| N      | number of samples used      |
+--------+-----------------------------+


.. _CSRV:

CSRV: Servo feedback data
~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------+
| TimeUS | Time since system startup           |
+--------+-------------------------------------+
| Id     | Servo number this data relates to   |
+--------+-------------------------------------+
| Pos    | Current servo position              |
+--------+-------------------------------------+
| Force  | Force being applied                 |
+--------+-------------------------------------+
| Speed  | Current servo movement speed        |
+--------+-------------------------------------+
| Pow    | Amount of rated power being applied |
+--------+-------------------------------------+


.. _CTRL:

CTRL: Attitude Control oscillation monitor diagnostics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+-----------+----------------------------------------------------+
| TimeUS    | Time since system startup                          |
+-----------+----------------------------------------------------+
| RMSRollP  | LPF Root-Mean-Squared Roll Rate controller P gain  |
+-----------+----------------------------------------------------+
| RMSRollD  | LPF Root-Mean-Squared Roll rate controller D gain  |
+-----------+----------------------------------------------------+
| RMSPitchP | LPF Root-Mean-Squared Pitch Rate controller P gain |
+-----------+----------------------------------------------------+
| RMSPitchD | LPF Root-Mean-Squared Pitch Rate controller D gain |
+-----------+----------------------------------------------------+
| RMSYaw    | LPF Root-Mean-Squared Yaw Rate controller P+D gain |
+-----------+----------------------------------------------------+


.. _CTUN:

CTUN: Control Tuning information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------+
| TimeUS | Time since system startup     |
+--------+-------------------------------+
| ThI    | throttle input                |
+--------+-------------------------------+
| ABst   | angle boost                   |
+--------+-------------------------------+
| ThO    | throttle output               |
+--------+-------------------------------+
| ThH    | calculated hover throttle     |
+--------+-------------------------------+
| DAlt   | desired altitude              |
+--------+-------------------------------+
| Alt    | achieved altitude             |
+--------+-------------------------------+
| BAlt   | barometric altitude           |
+--------+-------------------------------+
| DSAlt  | desired rangefinder altitude  |
+--------+-------------------------------+
| SAlt   | achieved rangefinder altitude |
+--------+-------------------------------+
| TAlt   | terrain altitude              |
+--------+-------------------------------+
| DCRt   | desired climb rate            |
+--------+-------------------------------+
| CRt    | climb rate                    |
+--------+-------------------------------+


.. _D16:

D16: Generic 16-bit-signed-integer storage
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Id     | Data type identifier      |
+--------+---------------------------+
| Value  | Value                     |
+--------+---------------------------+


.. _D32:

D32: Generic 32-bit-signed-integer storage
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Id     | Data type identifier      |
+--------+---------------------------+
| Value  | Value                     |
+--------+---------------------------+


.. _DFLT:

DFLT: Generic float storage
~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Id     | Data type identifier      |
+--------+---------------------------+
| Value  | Value                     |
+--------+---------------------------+


.. _DMS:

DMS: DataFlash-Over-MAVLink statistics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------+
| TimeUS | Time since system startup                          |
+--------+----------------------------------------------------+
| N      | Current block number                               |
+--------+----------------------------------------------------+
| Dp     | Number of times we rejected a write to the backend |
+--------+----------------------------------------------------+
| RT     | Number of blocks sent from the retry queue         |
+--------+----------------------------------------------------+
| RS     | Number of resends of unacknowledged data made      |
+--------+----------------------------------------------------+
| Fa     | Average number of blocks on the free list          |
+--------+----------------------------------------------------+
| Fmn    | Minimum number of blocks on the free list          |
+--------+----------------------------------------------------+
| Fmx    | Maximum number of blocks on the free list          |
+--------+----------------------------------------------------+
| Pa     | Average number of blocks on the pending list       |
+--------+----------------------------------------------------+
| Pmn    | Minimum number of blocks on the pending list       |
+--------+----------------------------------------------------+
| Pmx    | Maximum number of blocks on the pending list       |
+--------+----------------------------------------------------+
| Sa     | Average number of blocks on the sent list          |
+--------+----------------------------------------------------+
| Smn    | Minimum number of blocks on the sent list          |
+--------+----------------------------------------------------+
| Smx    | Maximum number of blocks on the sent list          |
+--------+----------------------------------------------------+


.. _DSF:

DSF: Onboard logging statistics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------+
| TimeUS | Time since system startup                              |
+--------+--------------------------------------------------------+
| Dp     | Number of times we rejected a write to the backend     |
+--------+--------------------------------------------------------+
| Blk    | Current block number                                   |
+--------+--------------------------------------------------------+
| Bytes  | Current write offset                                   |
+--------+--------------------------------------------------------+
| FMn    | Minimum free space in write buffer in last time period |
+--------+--------------------------------------------------------+
| FMx    | Maximum free space in write buffer in last time period |
+--------+--------------------------------------------------------+
| FAv    | Average free space in write buffer in last time period |
+--------+--------------------------------------------------------+


.. _DSTL:

DSTL: Deepstall Landing data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------------+
| TimeUS | Time since system startup                                    |
+--------+--------------------------------------------------------------+
| Stg    | Deepstall landing stage                                      |
+--------+--------------------------------------------------------------+
| THdg   | Target heading                                               |
+--------+--------------------------------------------------------------+
| Lat    | Landing point latitude                                       |
+--------+--------------------------------------------------------------+
| Lng    | Landing point longitude                                      |
+--------+--------------------------------------------------------------+
| Alt    | Landing point altitude                                       |
+--------+--------------------------------------------------------------+
| XT     | Crosstrack error                                             |
+--------+--------------------------------------------------------------+
| Travel | Expected travel distance vehicle will travel from this point |
+--------+--------------------------------------------------------------+
| L1I    | L1 controller crosstrack integrator value                    |
+--------+--------------------------------------------------------------+
| Loiter | wind estimate loiter angle flown                             |
+--------+--------------------------------------------------------------+
| Des    | Deepstall steering PID desired value                         |
+--------+--------------------------------------------------------------+
| P      | Deepstall steering PID Proportional response component       |
+--------+--------------------------------------------------------------+
| I      | Deepstall steering PID Integral response component           |
+--------+--------------------------------------------------------------+
| D      | Deepstall steering PID Derivative response component         |
+--------+--------------------------------------------------------------+


.. _DU32:

DU32: Generic 32-bit-unsigned-integer storage
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Id     | Data type identifier      |
+--------+---------------------------+
| Value  | Value                     |
+--------+---------------------------+


.. _ECYL:

ECYL: EFI per-cylinder information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------+
| TimeUS | Time since system startup                          |
+--------+----------------------------------------------------+
| Inst   | Cylinder this data belongs to                      |
+--------+----------------------------------------------------+
| IgnT   | Ignition timing                                    |
+--------+----------------------------------------------------+
| InjT   | Injection time                                     |
+--------+----------------------------------------------------+
| CHT    | Cylinder head temperature                          |
+--------+----------------------------------------------------+
| EGT    | Exhaust gas temperature                            |
+--------+----------------------------------------------------+
| Lambda | Estimated lambda coefficient (dimensionless ratio) |
+--------+----------------------------------------------------+
| IDX    | Index of the publishing ECU                        |
+--------+----------------------------------------------------+


.. _EFI:

EFI: Electronic Fuel Injection system data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------+
| TimeUS | Time since system startup   |
+--------+-----------------------------+
| LP     | Reported engine load        |
+--------+-----------------------------+
| Rpm    | Reported engine RPM         |
+--------+-----------------------------+
| SDT    | Spark Dwell Time            |
+--------+-----------------------------+
| ATM    | Atmospheric pressure        |
+--------+-----------------------------+
| IMP    | Intake manifold pressure    |
+--------+-----------------------------+
| IMT    | Intake manifold temperature |
+--------+-----------------------------+
| ECT    | Engine Coolant Temperature  |
+--------+-----------------------------+
| OilP   | Oil Pressure                |
+--------+-----------------------------+
| OilT   | Oil temperature             |
+--------+-----------------------------+
| FP     | Fuel Pressure               |
+--------+-----------------------------+
| FCR    | Fuel Consumption Rate       |
+--------+-----------------------------+
| CFV    | Consumed fueld volume       |
+--------+-----------------------------+
| TPS    | Throttle Position           |
+--------+-----------------------------+
| IDX    | Index of the publishing ECU |
+--------+-----------------------------+


.. _EFI2:

EFI2: Electronic Fuel Injection system data - redux
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+-----------------------------+
| TimeUS  | Time since system startup   |
+---------+-----------------------------+
| Healthy | True if EFI is healthy      |
+---------+-----------------------------+
| ES      | Engine state                |
+---------+-----------------------------+
| GE      | General error               |
+---------+-----------------------------+
| CSE     | Crankshaft sensor status    |
+---------+-----------------------------+
| TS      | Temperature status          |
+---------+-----------------------------+
| FPS     | Fuel pressure status        |
+---------+-----------------------------+
| OPS     | Oil pressure status         |
+---------+-----------------------------+
| DS      | Detonation status           |
+---------+-----------------------------+
| MS      | Misfire status              |
+---------+-----------------------------+
| DebS    | Debris status               |
+---------+-----------------------------+
| SPU     | Spark plug usage            |
+---------+-----------------------------+
| IDX     | Index of the publishing ECU |
+---------+-----------------------------+


.. _ERR:

ERR: Specifically coded error messages
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------+
| TimeUS | Time since system startup             |
+--------+---------------------------------------+
| Subsys | Subsystem in which the error occurred |
+--------+---------------------------------------+
| ECode  | Subsystem-specific error code         |
+--------+---------------------------------------+


.. _ESC:

ESC: Feedback received from ESCs
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-------------------------------------+
| TimeUS   | microseconds since system startup   |
+----------+-------------------------------------+
| Instance | ESC instance number                 |
+----------+-------------------------------------+
| RPM      | reported motor rotation rate        |
+----------+-------------------------------------+
| Volt     | Perceived input voltage for the ESC |
+----------+-------------------------------------+
| Curr     | Perceived current through the ESC   |
+----------+-------------------------------------+
| Temp     | ESC temperature                     |
+----------+-------------------------------------+
| CTot     | current consumed total              |
+----------+-------------------------------------+
| MotTemp  | measured motor temperature          |
+----------+-------------------------------------+


.. _EV:

EV: Specifically coded event messages
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Id     | Event identifier          |
+--------+---------------------------+


.. _FHLD:

FHLD: FlowHold mode messages
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------------------------------------------------------------+
| TimeUS | Time since system startup                                                                                    |
+--------+--------------------------------------------------------------------------------------------------------------+
| SFx    | Filtered flow rate, X-Axis                                                                                   |
+--------+--------------------------------------------------------------------------------------------------------------+
| SFy    | Filtered flow rate, Y-Axis                                                                                   |
+--------+--------------------------------------------------------------------------------------------------------------+
| Ax     | Target lean angle, X-Axis                                                                                    |
+--------+--------------------------------------------------------------------------------------------------------------+
| Ay     | Target lean angle, Y-Axis                                                                                    |
+--------+--------------------------------------------------------------------------------------------------------------+
| Qual   | Flow sensor quality. If this value falls below FHLD_QUAL_MIN parameter, FlowHold will act just like AltHold. |
+--------+--------------------------------------------------------------------------------------------------------------+
| Ix     | Integral part of PI controller, X-Axis                                                                       |
+--------+--------------------------------------------------------------------------------------------------------------+
| Iy     | Integral part of PI controller, Y-Axis                                                                       |
+--------+--------------------------------------------------------------------------------------------------------------+


.. _FHXY:

FHXY: Height estimation using optical flow sensor 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+----------------------------------------------------------------------------------------------------------------------------+
| TimeUS   | Time since system startup                                                                                                  |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| DFx      | Delta flow rate, X-Axis                                                                                                    |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| DFy      | Delta flow rate, Y-Axis                                                                                                    |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| DVx      | Integrated delta velocity rate, X-Axis                                                                                     |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| DVy      | Integrated delta velocity rate, Y-Axis                                                                                     |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| Hest     | Estimated Height                                                                                                           |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| DH       | Delta Height                                                                                                               |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| Hofs     | Height offset                                                                                                              |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| InsH     | Height estimate from inertial navigation library                                                                           |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| LastInsH | Last used INS height in optical flow sensor height estimation calculations                                                 |
+----------+----------------------------------------------------------------------------------------------------------------------------+
| DTms     | Time between optical flow sensor updates. This should be less than 500ms for performing the height estimation calculations |
+----------+----------------------------------------------------------------------------------------------------------------------------+


.. _FMT:

FMT: Message defining the format of messages in this file
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+----------------------------------------------------------------------------+
| Type    | unique-to-this-log identifier for message being defined                    |
+---------+----------------------------------------------------------------------------+
| Length  | the number of bytes taken up by this message (including all headers)       |
+---------+----------------------------------------------------------------------------+
| Name    | name of the message being defined                                          |
+---------+----------------------------------------------------------------------------+
| Format  | character string defining the C-storage-type of the fields in this message |
+---------+----------------------------------------------------------------------------+
| Columns | the labels of the message being defined                                    |
+---------+----------------------------------------------------------------------------+


.. _FMTU:

FMTU: Message defining units and multipliers used for fields of other messages
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+---------------------------------------------------------------------------------------------------------------------------------+
| TimeUS  | Time since system startup                                                                                                       |
+---------+---------------------------------------------------------------------------------------------------------------------------------+
| FmtType | numeric reference to associated FMT message                                                                                     |
+---------+---------------------------------------------------------------------------------------------------------------------------------+
| UnitIds | each character refers to a UNIT message.  The unit at an offset corresponds to the field at the same offset in FMT.Format       |
+---------+---------------------------------------------------------------------------------------------------------------------------------+
| MultIds | each character refers to a MULT message.  The multiplier at an offset corresponds to the field at the same offset in FMT.Format |
+---------+---------------------------------------------------------------------------------------------------------------------------------+


.. _FOLL:

FOLL: Follow library diagnostic data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------+
| TimeUS | Time since system startup          |
+--------+------------------------------------+
| Lat    | Target latitude                    |
+--------+------------------------------------+
| Lon    | Target longitude                   |
+--------+------------------------------------+
| Alt    | Target absolute altitude           |
+--------+------------------------------------+
| VelN   | Target earth-frame velocity, North |
+--------+------------------------------------+
| VelE   | Target earth-frame velocity, East  |
+--------+------------------------------------+
| VelD   | Target earth-frame velocity, Down  |
+--------+------------------------------------+
| LatE   | Vehicle latitude                   |
+--------+------------------------------------+
| LonE   | Vehicle longitude                  |
+--------+------------------------------------+
| AltE   | Vehicle absolute altitude          |
+--------+------------------------------------+


.. _FTN1:

FTN1: FFT Filter Tuning
~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------------------------------------------------+
| TimeUS | microseconds since system startup                                                     |
+--------+---------------------------------------------------------------------------------------+
| PkAvg  | peak noise frequency as an energy-weighted average of roll and pitch peak frequencies |
+--------+---------------------------------------------------------------------------------------+
| BwAvg  | bandwidth of weighted peak freqency where edges are determined by FFT_ATT_REF         |
+--------+---------------------------------------------------------------------------------------+
| DnF    | dynamic harmonic notch centre frequency                                               |
+--------+---------------------------------------------------------------------------------------+
| SnX    | signal-to-noise ratio on the roll axis                                                |
+--------+---------------------------------------------------------------------------------------+
| SnY    | signal-to-noise ratio on the pitch axis                                               |
+--------+---------------------------------------------------------------------------------------+
| SnZ    | signal-to-noise ratio on the yaw axis                                                 |
+--------+---------------------------------------------------------------------------------------+
| FtX    | harmonic fit on roll of the highest noise peak to the second highest noise peak       |
+--------+---------------------------------------------------------------------------------------+
| FtY    | harmonic fit on pitch of the highest noise peak to the second highest noise peak      |
+--------+---------------------------------------------------------------------------------------+
| FtZ    | harmonic fit on yaw of the highest noise peak to the second highest noise peak        |
+--------+---------------------------------------------------------------------------------------+
| FH     | FFT health                                                                            |
+--------+---------------------------------------------------------------------------------------+
| Tc     | FFT cycle time                                                                        |
+--------+---------------------------------------------------------------------------------------+


.. _FTN2:

FTN2: FFT Noise Frequency Peak
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------------------------------------------+
| TimeUS | microseconds since system startup                                                       |
+--------+-----------------------------------------------------------------------------------------+
| Id     | peak id where 0 is the centre peak, 1 is the lower shoulder and 2 is the upper shoulder |
+--------+-----------------------------------------------------------------------------------------+
| PkX    | noise frequency of the peak on roll                                                     |
+--------+-----------------------------------------------------------------------------------------+
| PkY    | noise frequency of the peak on pitch                                                    |
+--------+-----------------------------------------------------------------------------------------+
| PkZ    | noise frequency of the peak on yaw                                                      |
+--------+-----------------------------------------------------------------------------------------+
| BwX    | bandwidth of the peak freqency on roll where edges are determined by FFT_ATT_REF        |
+--------+-----------------------------------------------------------------------------------------+
| BwY    | bandwidth of the peak freqency on pitch where edges are determined by FFT_ATT_REF       |
+--------+-----------------------------------------------------------------------------------------+
| BwZ    | bandwidth of the peak freqency on yaw where edges are determined by FFT_ATT_REF         |
+--------+-----------------------------------------------------------------------------------------+
| EnX    | power spectral density bin energy of the peak on roll                                   |
+--------+-----------------------------------------------------------------------------------------+
| EnY    | power spectral density bin energy of the peak on roll                                   |
+--------+-----------------------------------------------------------------------------------------+
| EnZ    | power spectral density bin energy of the peak on roll                                   |
+--------+-----------------------------------------------------------------------------------------+


.. _GMB1:

GMB1: Solo Gimbal measurements
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------+
| TimeUS | Time since system startup                      |
+--------+------------------------------------------------+
| dt     | sum of time across measurements in this packet |
+--------+------------------------------------------------+
| dax    | delta-angle sum, x-axis                        |
+--------+------------------------------------------------+
| day    | delta-angle sum, y-axis                        |
+--------+------------------------------------------------+
| daz    | delta-angle sum, z-axis                        |
+--------+------------------------------------------------+
| dvx    | delta-velocity sum, x-axis                     |
+--------+------------------------------------------------+
| dvy    | delta-velocity sum, y-axis                     |
+--------+------------------------------------------------+
| dvz    | delta-velocity sum, z-axis                     |
+--------+------------------------------------------------+
| jx     | joint angle, x                                 |
+--------+------------------------------------------------+
| jy     | joint angle, y                                 |
+--------+------------------------------------------------+
| jz     | joint angle, z                                 |
+--------+------------------------------------------------+


.. _GMB2:

GMB2: Solo Gimbal estimation and demands
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------+
| TimeUS | Time since system startup                        |
+--------+--------------------------------------------------+
| es     | Solo Gimbal EKF status bits                      |
+--------+--------------------------------------------------+
| ex     | Solo Gimbal EKF estimate of gimbal angle, x-axis |
+--------+--------------------------------------------------+
| ey     | Solo Gimbal EKF estimate of gimbal angle, y-axis |
+--------+--------------------------------------------------+
| ez     | Solo Gimbal EKF estimate of gimbal angle, y-axis |
+--------+--------------------------------------------------+
| rx     | Angular velocity demand around x-axis            |
+--------+--------------------------------------------------+
| ry     | Angular velocity demand around y-axis            |
+--------+--------------------------------------------------+
| rz     | Angular velocity demand around z-axis            |
+--------+--------------------------------------------------+
| tx     | Angular position target around x-axis            |
+--------+--------------------------------------------------+
| ty     | Angular position target around y-axis            |
+--------+--------------------------------------------------+
| tz     | Angular position target around z-axis            |
+--------+--------------------------------------------------+


.. _GPA:

GPA: GPS accuracy information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------------+
| TimeUS | Time since system startup                                 |
+--------+-----------------------------------------------------------+
| VDop   | vertical degree of procession                             |
+--------+-----------------------------------------------------------+
| HAcc   | horizontal position accuracy                              |
+--------+-----------------------------------------------------------+
| VAcc   | vertical position accuracy                                |
+--------+-----------------------------------------------------------+
| SAcc   | speed accuracy                                            |
+--------+-----------------------------------------------------------+
| YAcc   | yaw accuracy                                              |
+--------+-----------------------------------------------------------+
| VV     | true if vertical velocity is available                    |
+--------+-----------------------------------------------------------+
| SMS    | time since system startup this sample was taken           |
+--------+-----------------------------------------------------------+
| Delta  | system time delta between the last two reported positions |
+--------+-----------------------------------------------------------+


.. _GPA2:

GPA2: GPS accuracy information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------------+
| TimeUS | Time since system startup                                 |
+--------+-----------------------------------------------------------+
| VDop   | vertical degree of procession                             |
+--------+-----------------------------------------------------------+
| HAcc   | horizontal position accuracy                              |
+--------+-----------------------------------------------------------+
| VAcc   | vertical position accuracy                                |
+--------+-----------------------------------------------------------+
| SAcc   | speed accuracy                                            |
+--------+-----------------------------------------------------------+
| YAcc   | yaw accuracy                                              |
+--------+-----------------------------------------------------------+
| VV     | true if vertical velocity is available                    |
+--------+-----------------------------------------------------------+
| SMS    | time since system startup this sample was taken           |
+--------+-----------------------------------------------------------+
| Delta  | system time delta between the last two reported positions |
+--------+-----------------------------------------------------------+


.. _GPAB:

GPAB: Blended GPS accuracy information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------------+
| TimeUS | Time since system startup                                 |
+--------+-----------------------------------------------------------+
| VDop   | vertical degree of procession                             |
+--------+-----------------------------------------------------------+
| HAcc   | horizontal position accuracy                              |
+--------+-----------------------------------------------------------+
| VAcc   | vertical position accuracy                                |
+--------+-----------------------------------------------------------+
| SAcc   | speed accuracy                                            |
+--------+-----------------------------------------------------------+
| YAcc   | yaw accuracy                                              |
+--------+-----------------------------------------------------------+
| VV     | true if vertical velocity is available                    |
+--------+-----------------------------------------------------------+
| SMS    | time since system startup this sample was taken           |
+--------+-----------------------------------------------------------+
| Delta  | system time delta between the last two reported positions |
+--------+-----------------------------------------------------------+


.. _GPS:

GPS: Information received from GNSS systems attached to the autopilot
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------+
| TimeUS | Time since system startup                           |
+--------+-----------------------------------------------------+
| Status | GPS Fix type; 2D fix, 3D fix etc.                   |
+--------+-----------------------------------------------------+
| GMS    | milliseconds since start of GPS Week                |
+--------+-----------------------------------------------------+
| GWk    | weeks since 5 Jan 1980                              |
+--------+-----------------------------------------------------+
| NSats  | number of satellites visible                        |
+--------+-----------------------------------------------------+
| HDop   | horizontal precision                                |
+--------+-----------------------------------------------------+
| Lat    | latitude                                            |
+--------+-----------------------------------------------------+
| Lng    | longitude                                           |
+--------+-----------------------------------------------------+
| Alt    | altitude                                            |
+--------+-----------------------------------------------------+
| Spd    | ground speed                                        |
+--------+-----------------------------------------------------+
| GCrs   | ground course                                       |
+--------+-----------------------------------------------------+
| VZ     | vertical speed                                      |
+--------+-----------------------------------------------------+
| Yaw    | vehicle yaw                                         |
+--------+-----------------------------------------------------+
| U      | boolean value indicating whether this GPS is in use |
+--------+-----------------------------------------------------+


.. _GPS2:

GPS2: Information received from GNSS systems attached to the autopilot
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------+
| TimeUS | Time since system startup                           |
+--------+-----------------------------------------------------+
| Status | GPS Fix type; 2D fix, 3D fix etc.                   |
+--------+-----------------------------------------------------+
| GMS    | milliseconds since start of GPS Week                |
+--------+-----------------------------------------------------+
| GWk    | weeks since 5 Jan 1980                              |
+--------+-----------------------------------------------------+
| NSats  | number of satellites visible                        |
+--------+-----------------------------------------------------+
| HDop   | horizontal precision                                |
+--------+-----------------------------------------------------+
| Lat    | latitude                                            |
+--------+-----------------------------------------------------+
| Lng    | longitude                                           |
+--------+-----------------------------------------------------+
| Alt    | altitude                                            |
+--------+-----------------------------------------------------+
| Spd    | ground speed                                        |
+--------+-----------------------------------------------------+
| GCrs   | ground course                                       |
+--------+-----------------------------------------------------+
| VZ     | vertical speed                                      |
+--------+-----------------------------------------------------+
| Yaw    | vehicle yaw                                         |
+--------+-----------------------------------------------------+
| U      | boolean value indicating whether this GPS is in use |
+--------+-----------------------------------------------------+


.. _GPSB:

GPSB: Information blended from GNSS systems attached to the autopilot
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------+
| TimeUS | Time since system startup                           |
+--------+-----------------------------------------------------+
| Status | GPS Fix type; 2D fix, 3D fix etc.                   |
+--------+-----------------------------------------------------+
| GMS    | milliseconds since start of GPS Week                |
+--------+-----------------------------------------------------+
| GWk    | weeks since 5 Jan 1980                              |
+--------+-----------------------------------------------------+
| NSats  | number of satellites visible                        |
+--------+-----------------------------------------------------+
| HDop   | horizontal precision                                |
+--------+-----------------------------------------------------+
| Lat    | latitude                                            |
+--------+-----------------------------------------------------+
| Lng    | longitude                                           |
+--------+-----------------------------------------------------+
| Alt    | altitude                                            |
+--------+-----------------------------------------------------+
| Spd    | ground speed                                        |
+--------+-----------------------------------------------------+
| GCrs   | ground course                                       |
+--------+-----------------------------------------------------+
| VZ     | vertical speed                                      |
+--------+-----------------------------------------------------+
| Yaw    | vehicle yaw                                         |
+--------+-----------------------------------------------------+
| U      | boolean value indicating whether this GPS is in use |
+--------+-----------------------------------------------------+


.. _GUID:

GUID: Guided mode target information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Type   | Type of guided mode       |
+--------+---------------------------+
| pX     | Target position, X-Axis   |
+--------+---------------------------+
| pY     | Target position, Y-Axis   |
+--------+---------------------------+
| pZ     | Target position, Z-Axis   |
+--------+---------------------------+
| vX     | Target velocity, X-Axis   |
+--------+---------------------------+
| vY     | Target velocity, Y-Axis   |
+--------+---------------------------+
| vZ     | Target velocity, Z-Axis   |
+--------+---------------------------+


.. _GYR1:

GYR1: IMU gyroscope data
~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-------------------------------------------------+
| TimeUS   | Time since system startup                       |
+----------+-------------------------------------------------+
| SampleUS | time since system startup this sample was taken |
+----------+-------------------------------------------------+
| GyrX     | measured rotation rate about X axis             |
+----------+-------------------------------------------------+
| GyrY     | measured rotation rate about Y axis             |
+----------+-------------------------------------------------+
| GyrZ     | measured rotation rate about Z axis             |
+----------+-------------------------------------------------+


.. _GYR2:

GYR2: IMU gyroscope data
~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-------------------------------------------------+
| TimeUS   | Time since system startup                       |
+----------+-------------------------------------------------+
| SampleUS | time since system startup this sample was taken |
+----------+-------------------------------------------------+
| GyrX     | measured rotation rate about X axis             |
+----------+-------------------------------------------------+
| GyrY     | measured rotation rate about Y axis             |
+----------+-------------------------------------------------+
| GyrZ     | measured rotation rate about Z axis             |
+----------+-------------------------------------------------+


.. _GYR3:

GYR3: IMU gyroscope data
~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-------------------------------------------------+
| TimeUS   | Time since system startup                       |
+----------+-------------------------------------------------+
| SampleUS | time since system startup this sample was taken |
+----------+-------------------------------------------------+
| GyrX     | measured rotation rate about X axis             |
+----------+-------------------------------------------------+
| GyrY     | measured rotation rate about Y axis             |
+----------+-------------------------------------------------+
| GyrZ     | measured rotation rate about Z axis             |
+----------+-------------------------------------------------+


.. _HEAT:

HEAT: IMU Heater data
~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------+
| TimeUS | Time since system startup            |
+--------+--------------------------------------+
| Temp   | Current IMU temperature              |
+--------+--------------------------------------+
| Targ   | Target IMU temperature               |
+--------+--------------------------------------+
| P      | Proportional portion of response     |
+--------+--------------------------------------+
| I      | Integral portion of response         |
+--------+--------------------------------------+
| Out    | Controller output to heating element |
+--------+--------------------------------------+


.. _HELI:

HELI: Helicopter related messages 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| DRRPM  | Desired rotor speed       |
+--------+---------------------------+
| ERRPM  | Estimated rotor speed     |
+--------+---------------------------+
| Gov    | Governor Output           |
+--------+---------------------------+
| Throt  | Throttle output           |
+--------+---------------------------+


.. _ICMB:

ICMB: ICM20789 diagnostics
~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------+
| TimeUS | Time since system startup   |
+--------+-----------------------------+
| Traw   | raw temperature from sensor |
+--------+-----------------------------+
| Praw   | raw pressure from sensor    |
+--------+-----------------------------+
| P      | pressure                    |
+--------+-----------------------------+
| T      | temperature                 |
+--------+-----------------------------+


.. _IMT:

IMT: Inertial Measurement Unit timing data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------+
| TimeUS | Time since system startup        |
+--------+----------------------------------+
| DelT   | Delta time                       |
+--------+----------------------------------+
| DelvT  | Delta velocity accumulation time |
+--------+----------------------------------+
| DelaT  | Delta angle accumulation time    |
+--------+----------------------------------+
| DelAX  | Accumulated delta angle X        |
+--------+----------------------------------+
| DelAY  | Accumulated delta angle Y        |
+--------+----------------------------------+
| DelAZ  | Accumulated delta angle Z        |
+--------+----------------------------------+
| DelVX  | Accumulated delta velocity X     |
+--------+----------------------------------+
| DelVY  | Accumulated delta velocity Y     |
+--------+----------------------------------+
| DelVZ  | Accumulated delta velocity Z     |
+--------+----------------------------------+


.. _IMT2:

IMT2: Inertial Measurement Unit timing data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------+
| TimeUS | Time since system startup        |
+--------+----------------------------------+
| DelT   | Delta time                       |
+--------+----------------------------------+
| DelvT  | Delta velocity accumulation time |
+--------+----------------------------------+
| DelaT  | Delta angle accumulation time    |
+--------+----------------------------------+
| DelAX  | Accumulated delta angle X        |
+--------+----------------------------------+
| DelAY  | Accumulated delta angle Y        |
+--------+----------------------------------+
| DelAZ  | Accumulated delta angle Z        |
+--------+----------------------------------+
| DelVX  | Accumulated delta velocity X     |
+--------+----------------------------------+
| DelVY  | Accumulated delta velocity Y     |
+--------+----------------------------------+
| DelVZ  | Accumulated delta velocity Z     |
+--------+----------------------------------+


.. _IMT3:

IMT3: Inertial Measurement Unit timing data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------+
| TimeUS | Time since system startup        |
+--------+----------------------------------+
| DelT   | Delta time                       |
+--------+----------------------------------+
| DelvT  | Delta velocity accumulation time |
+--------+----------------------------------+
| DelaT  | Delta angle accumulation time    |
+--------+----------------------------------+
| DelAX  | Accumulated delta angle X        |
+--------+----------------------------------+
| DelAY  | Accumulated delta angle Y        |
+--------+----------------------------------+
| DelAZ  | Accumulated delta angle Z        |
+--------+----------------------------------+
| DelVX  | Accumulated delta velocity X     |
+--------+----------------------------------+
| DelVY  | Accumulated delta velocity Y     |
+--------+----------------------------------+
| DelVZ  | Accumulated delta velocity Z     |
+--------+----------------------------------+


.. _IMU:

IMU: Inertial Measurement Unit data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------+
| TimeUS | Time since system startup           |
+--------+-------------------------------------+
| GyrX   | measured rotation rate about X axis |
+--------+-------------------------------------+
| GyrY   | measured rotation rate about Y axis |
+--------+-------------------------------------+
| GyrZ   | measured rotation rate about Z axis |
+--------+-------------------------------------+
| AccX   | acceleration along X axis           |
+--------+-------------------------------------+
| AccY   | acceleration along Y axis           |
+--------+-------------------------------------+
| AccZ   | acceleration along Z axis           |
+--------+-------------------------------------+
| EG     | gyroscope error count               |
+--------+-------------------------------------+
| EA     | accelerometer error count           |
+--------+-------------------------------------+
| T      | IMU temperature                     |
+--------+-------------------------------------+
| GH     | gyroscope health                    |
+--------+-------------------------------------+
| AH     | accelerometer health                |
+--------+-------------------------------------+
| GHz    | gyroscope measurement rate          |
+--------+-------------------------------------+
| AHz    | accelerometer measurement rate      |
+--------+-------------------------------------+


.. _IMU2:

IMU2: Inertial Measurement Unit data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------+
| TimeUS | Time since system startup           |
+--------+-------------------------------------+
| GyrX   | measured rotation rate about X axis |
+--------+-------------------------------------+
| GyrY   | measured rotation rate about Y axis |
+--------+-------------------------------------+
| GyrZ   | measured rotation rate about Z axis |
+--------+-------------------------------------+
| AccX   | acceleration along X axis           |
+--------+-------------------------------------+
| AccY   | acceleration along Y axis           |
+--------+-------------------------------------+
| AccZ   | acceleration along Z axis           |
+--------+-------------------------------------+
| EG     | gyroscope error count               |
+--------+-------------------------------------+
| EA     | accelerometer error count           |
+--------+-------------------------------------+
| T      | IMU temperature                     |
+--------+-------------------------------------+
| GH     | gyroscope health                    |
+--------+-------------------------------------+
| AH     | accelerometer health                |
+--------+-------------------------------------+
| GHz    | gyroscope measurement rate          |
+--------+-------------------------------------+
| AHz    | accelerometer measurement rate      |
+--------+-------------------------------------+


.. _IMU3:

IMU3: Inertial Measurement Unit data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------+
| TimeUS | Time since system startup           |
+--------+-------------------------------------+
| GyrX   | measured rotation rate about X axis |
+--------+-------------------------------------+
| GyrY   | measured rotation rate about Y axis |
+--------+-------------------------------------+
| GyrZ   | measured rotation rate about Z axis |
+--------+-------------------------------------+
| AccX   | acceleration along X axis           |
+--------+-------------------------------------+
| AccY   | acceleration along Y axis           |
+--------+-------------------------------------+
| AccZ   | acceleration along Z axis           |
+--------+-------------------------------------+
| EG     | gyroscope error count               |
+--------+-------------------------------------+
| EA     | accelerometer error count           |
+--------+-------------------------------------+
| T      | IMU temperature                     |
+--------+-------------------------------------+
| GH     | gyroscope health                    |
+--------+-------------------------------------+
| AH     | accelerometer health                |
+--------+-------------------------------------+
| GHz    | gyroscope measurement rate          |
+--------+-------------------------------------+
| AHz    | accelerometer measurement rate      |
+--------+-------------------------------------+


.. _IOMC:

IOMC: IOMCU diagnostic information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------------+
| TimeUS | Time since system startup                 |
+--------+-------------------------------------------+
| Mem    | Free memory                               |
+--------+-------------------------------------------+
| TS     | IOMCU uptime                              |
+--------+-------------------------------------------+
| NPkt   | Number of packets received by IOMCU       |
+--------+-------------------------------------------+
| Nerr   | Protocol failures on MCU side             |
+--------+-------------------------------------------+
| Nerr2  | Reported number of failures on IOMCU side |
+--------+-------------------------------------------+
| NDel   | Number of delayed packets received by MCU |
+--------+-------------------------------------------+


.. _JSN1:

JSN1: Log data received from JSON simulator
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------+
| TimeUS | Time since system startup   |
+--------+-----------------------------+
| TUS    | Simulation's timestamp      |
+--------+-----------------------------+
| R      | Simulation's roll           |
+--------+-----------------------------+
| P      | Simulation's pitch          |
+--------+-----------------------------+
| Y      | Simulation's yaw            |
+--------+-----------------------------+
| GX     | Simulated gyroscope, X-axis |
+--------+-----------------------------+
| GY     | Simulated gyroscope, Y-axis |
+--------+-----------------------------+
| GZ     | Simulated gyroscope, Z-axis |
+--------+-----------------------------+


.. _JSN2:

JSN2: Log data received from JSON simulator
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------+
| TimeUS | Time since system startup           |
+--------+-------------------------------------+
| AX     | simulation's acceleration, X-axis   |
+--------+-------------------------------------+
| AY     | simulation's acceleration, Y-axis   |
+--------+-------------------------------------+
| AZ     | simulation's acceleration, Z-axis   |
+--------+-------------------------------------+
| VX     | simulation's velocity, X-axis       |
+--------+-------------------------------------+
| VY     | simulation's velocity, Y-axis       |
+--------+-------------------------------------+
| VZ     | simulation's velocity, Z-axis       |
+--------+-------------------------------------+
| PX     | simulation's position, X-axis       |
+--------+-------------------------------------+
| PY     | simulation's position, Y-axis       |
+--------+-------------------------------------+
| PZ     | simulation's position, Z-axis       |
+--------+-------------------------------------+
| Alt    | simulation's gps altitude           |
+--------+-------------------------------------+
| SD     | simulation's earth-frame speed-down |
+--------+-------------------------------------+


.. _LAND:

LAND: Slope Landing data
~~~~~~~~~~~~~~~~~~~~~~~~
+-----------+-----------------------------------+
| TimeUS    | Time since system startup         |
+-----------+-----------------------------------+
| stage     | progress through landing sequence |
+-----------+-----------------------------------+
| f1        | Landing flags                     |
+-----------+-----------------------------------+
| f2        | Slope-specific landing flags      |
+-----------+-----------------------------------+
| slope     | Slope to landing point            |
+-----------+-----------------------------------+
| slopeInit | Initial slope to landing point    |
+-----------+-----------------------------------+
| altO      | Rangefinder correction            |
+-----------+-----------------------------------+


.. _LGR:

LGR: Landing gear information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------------+-----------------------------------+
| TimeUS         | Time since system startup         |
+----------------+-----------------------------------+
| LandingGear    | Current landing gear state        |
+----------------+-----------------------------------+
| WeightOnWheels | True if there is weight on wheels |
+----------------+-----------------------------------+


.. _MAG:

MAG: Information received from compasses
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------+
| TimeUS | Time since system startup                              |
+--------+--------------------------------------------------------+
| MagX   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| MagY   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| MagZ   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| OfsX   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| OfsY   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| OfsZ   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| MOfsX  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| MOfsY  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| MOfsZ  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| Health | true if the compass is considered healthy              |
+--------+--------------------------------------------------------+
| S      | time measurement was taken                             |
+--------+--------------------------------------------------------+


.. _MAG2:

MAG2: Information received from compasses
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------+
| TimeUS | Time since system startup                              |
+--------+--------------------------------------------------------+
| MagX   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| MagY   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| MagZ   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| OfsX   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| OfsY   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| OfsZ   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| MOfsX  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| MOfsY  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| MOfsZ  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| Health | true if the compass is considered healthy              |
+--------+--------------------------------------------------------+
| S      | time measurement was taken                             |
+--------+--------------------------------------------------------+


.. _MAG3:

MAG3: Information received from compasses
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------+
| TimeUS | Time since system startup                              |
+--------+--------------------------------------------------------+
| MagX   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| MagY   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| MagZ   | magnetic field strength in body frame                  |
+--------+--------------------------------------------------------+
| OfsX   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| OfsY   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| OfsZ   | magnetic field offset in body frame                    |
+--------+--------------------------------------------------------+
| MOfsX  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| MOfsY  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| MOfsZ  | motor interference magnetic field offset in body frame |
+--------+--------------------------------------------------------+
| Health | true if the compass is considered healthy              |
+--------+--------------------------------------------------------+
| S      | time measurement was taken                             |
+--------+--------------------------------------------------------+


.. _MAV:

MAV: GCS MAVLink link statistics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-----------------------------------------------------------------------------------------+
| TimeUS | Time since system startup                                                               |
+--------+-----------------------------------------------------------------------------------------+
| chan   | mavlink channel number                                                                  |
+--------+-----------------------------------------------------------------------------------------+
| txp    | transmitted packet count                                                                |
+--------+-----------------------------------------------------------------------------------------+
| rxp    | received packet count                                                                   |
+--------+-----------------------------------------------------------------------------------------+
| rxdp   | perceived number of packets we never received                                           |
+--------+-----------------------------------------------------------------------------------------+
| flags  | compact representation of some stage of the channel                                     |
+--------+-----------------------------------------------------------------------------------------+
| ss     | stream slowdown is the number of ms being added to each message to fit within bandwidth |
+--------+-----------------------------------------------------------------------------------------+
| tf     | times buffer was full when a message was going to be sent                               |
+--------+-----------------------------------------------------------------------------------------+


.. _MAVC:

MAVC: MAVLink command we have just executed
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------------------------------------------+
| TimeUS | Time since system startup                                               |
+--------+-------------------------------------------------------------------------+
| TS     | target system for command                                               |
+--------+-------------------------------------------------------------------------+
| TC     | target component for command                                            |
+--------+-------------------------------------------------------------------------+
| Fr     | command frame                                                           |
+--------+-------------------------------------------------------------------------+
| Cmd    | mavlink command enum value                                              |
+--------+-------------------------------------------------------------------------+
| Cur    | current flag from mavlink packet                                        |
+--------+-------------------------------------------------------------------------+
| AC     | autocontinue flag from mavlink packet                                   |
+--------+-------------------------------------------------------------------------+
| P1     | first parameter from mavlink packet                                     |
+--------+-------------------------------------------------------------------------+
| P2     | second parameter from mavlink packet                                    |
+--------+-------------------------------------------------------------------------+
| P3     | third parameter from mavlink packet                                     |
+--------+-------------------------------------------------------------------------+
| P4     | fourth parameter from mavlink packet                                    |
+--------+-------------------------------------------------------------------------+
| X      | X coordinate from mavlink packet                                        |
+--------+-------------------------------------------------------------------------+
| Y      | Y coordinate from mavlink packet                                        |
+--------+-------------------------------------------------------------------------+
| Z      | Z coordinate from mavlink packet                                        |
+--------+-------------------------------------------------------------------------+
| Res    | command result being returned from autopilot                            |
+--------+-------------------------------------------------------------------------+
| WL     | true if this command arrived via a COMMAND_LONG rather than COMMAND_INT |
+--------+-------------------------------------------------------------------------+


.. _MMO:

MMO: MMC3416 compass data
~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Nx     | new measurement X axis    |
+--------+---------------------------+
| Ny     | new measurement Y axis    |
+--------+---------------------------+
| Nz     | new measurement Z axis    |
+--------+---------------------------+
| Ox     | new offset X axis         |
+--------+---------------------------+
| Oy     | new offset Y axis         |
+--------+---------------------------+
| Oz     | new offset Z axis         |
+--------+---------------------------+


.. _MODE:

MODE: vehicle control mode information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+--------------------------------------------------+
| TimeUS  | Time since system startup                        |
+---------+--------------------------------------------------+
| Mode    | vehicle-specific mode number                     |
+---------+--------------------------------------------------+
| ModeNum | alias for Mode                                   |
+---------+--------------------------------------------------+
| Rsn     | reason for entering this mode; enumeration value |
+---------+--------------------------------------------------+


.. _MON:

MON: Main loop stuck data
~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+-------------------------------------------------------------------+
| TimeUS  | Time since system startup                                         |
+---------+-------------------------------------------------------------------+
| LDelay  | Time main loop has been stuck for                                 |
+---------+-------------------------------------------------------------------+
| Task    | Current scheduler task number                                     |
+---------+-------------------------------------------------------------------+
| IErr    | Internal error mask; which internal errors have been detected     |
+---------+-------------------------------------------------------------------+
| IErrCnt | Internal error count; how many internal errors have been detected |
+---------+-------------------------------------------------------------------+
| IErrLn  | Line on which internal error ocurred                              |
+---------+-------------------------------------------------------------------+
| MavMsg  | Id of the last mavlink message processed                          |
+---------+-------------------------------------------------------------------+
| MavCmd  | Id of the last mavlink command processed                          |
+---------+-------------------------------------------------------------------+
| SemLine | Line number of semaphore most recently taken                      |
+---------+-------------------------------------------------------------------+
| SPICnt  | Number of SPI transactions processed                              |
+---------+-------------------------------------------------------------------+
| I2CCnt  | Number of i2c transactions processed                              |
+---------+-------------------------------------------------------------------+


.. _MOTB:

MOTB: Battery information
~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+-------------------------------------------------------------------+
| TimeUS  | Time since system startup                                         |
+---------+-------------------------------------------------------------------+
| LiftMax | Maximum motor compensation gain                                   |
+---------+-------------------------------------------------------------------+
| BatVolt | Ratio betwen detected battery voltage and maximum battery voltage |
+---------+-------------------------------------------------------------------+
| BatRes  | Estimated battery resistance                                      |
+---------+-------------------------------------------------------------------+
| ThLimit | Throttle limit set due to battery current limitations             |
+---------+-------------------------------------------------------------------+


.. _MSG:

MSG: Textual messages
~~~~~~~~~~~~~~~~~~~~~
+---------+---------------------------+
| TimeUS  | Time since system startup |
+---------+---------------------------+
| Message | message text              |
+---------+---------------------------+


.. _MULT:

MULT: Message mapping from single character to numeric multiplier
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------+
| TimeUS | Time since system startup    |
+--------+------------------------------+
| Id     | character referenced by FMTU |
+--------+------------------------------+
| Mult   | numeric multiplier           |
+--------+------------------------------+


.. _NKF0:

NKF0: EKF2 beacon sensor diagnostics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------------------------------+
| TimeUS | Time since system startup                                              |
+--------+------------------------------------------------------------------------+
| ID     | Beacon sensor ID                                                       |
+--------+------------------------------------------------------------------------+
| rng    | Beacon range                                                           |
+--------+------------------------------------------------------------------------+
| innov  | Beacon range innovation                                                |
+--------+------------------------------------------------------------------------+
| SIV    | sqrt of beacon range innovation variance                               |
+--------+------------------------------------------------------------------------+
| TR     | Beacon range innovation consistency test ratio                         |
+--------+------------------------------------------------------------------------+
| BPN    | Beacon north position                                                  |
+--------+------------------------------------------------------------------------+
| BPE    | Beacon east position                                                   |
+--------+------------------------------------------------------------------------+
| BPD    | Beacon down position                                                   |
+--------+------------------------------------------------------------------------+
| OFH    | High estimate of vertical position offset of beacons rel to EKF origin |
+--------+------------------------------------------------------------------------+
| OFL    | Low estimate of vertical position offset of beacons rel to EKF origin  |
+--------+------------------------------------------------------------------------+
| OFN    | always zero                                                            |
+--------+------------------------------------------------------------------------+
| OFE    | always zero                                                            |
+--------+------------------------------------------------------------------------+
| OFD    | always zero                                                            |
+--------+------------------------------------------------------------------------+


.. _NKF1:

NKF1: EKF2 estimator outputs
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------+
| TimeUS | Time since system startup                        |
+--------+--------------------------------------------------+
| C      | EKF2 core this data is for                       |
+--------+--------------------------------------------------+
| Roll   | Estimated roll                                   |
+--------+--------------------------------------------------+
| Pitch  | Estimated pitch                                  |
+--------+--------------------------------------------------+
| Yaw    | Estimated yaw                                    |
+--------+--------------------------------------------------+
| VN     | Estimated velocity (North component)             |
+--------+--------------------------------------------------+
| VE     | Estimated velocity (East component)              |
+--------+--------------------------------------------------+
| VD     | Estimated velocity (Down component)              |
+--------+--------------------------------------------------+
| dPD    | Filtered derivative of vertical position (down)  |
+--------+--------------------------------------------------+
| PN     | Estimated distance from origin (North component) |
+--------+--------------------------------------------------+
| PE     | Estimated distance from origin (East component)  |
+--------+--------------------------------------------------+
| PD     | Estimated distance from origin (Down component)  |
+--------+--------------------------------------------------+
| GX     | Estimated gyro bias, X axis                      |
+--------+--------------------------------------------------+
| GY     | Estimated gyro bias, Y axis                      |
+--------+--------------------------------------------------+
| GZ     | Estimated gyro bias, Z axis                      |
+--------+--------------------------------------------------+
| OH     | Height of origin above WGS-84                    |
+--------+--------------------------------------------------+


.. _NKF2:

NKF2: EKF2 estimator secondary outputs
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------------+
| TimeUS | Time since system startup                 |
+--------+-------------------------------------------+
| C      | EKF2 core this data is for                |
+--------+-------------------------------------------+
| AZbias | Estimated accelerometer Z bias            |
+--------+-------------------------------------------+
| GSX    | Gyro Scale Factor (X-axis)                |
+--------+-------------------------------------------+
| GSY    | Gyro Scale Factor (Y-axis)                |
+--------+-------------------------------------------+
| GSZ    | Gyro Scale Factor (Z-axis)                |
+--------+-------------------------------------------+
| VWN    | Estimated wind velocity (North component) |
+--------+-------------------------------------------+
| VWE    | Estimated wind velocity (East component)  |
+--------+-------------------------------------------+
| MN     | Magnetic field strength (North component) |
+--------+-------------------------------------------+
| ME     | Magnetic field strength (East component)  |
+--------+-------------------------------------------+
| MD     | Magnetic field strength (Down component)  |
+--------+-------------------------------------------+
| MX     | Magnetic field strength (body X-axis)     |
+--------+-------------------------------------------+
| MY     | Magnetic field strength (body Y-axis)     |
+--------+-------------------------------------------+
| MZ     | Magnetic field strength (body Z-axis)     |
+--------+-------------------------------------------+
| MI     | Magnetometer used for data                |
+--------+-------------------------------------------+


.. _NKF3:

NKF3: EKF2 innovations
~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------------+
| TimeUS | Time since system startup                                |
+--------+----------------------------------------------------------+
| C      | EKF2 core this data is for                               |
+--------+----------------------------------------------------------+
| IVN    | Innovation in velocity (North component)                 |
+--------+----------------------------------------------------------+
| IVE    | Innovation in velocity (East component)                  |
+--------+----------------------------------------------------------+
| IVD    | Innovation in velocity (Down component)                  |
+--------+----------------------------------------------------------+
| IPN    | Innovation in position (North component)                 |
+--------+----------------------------------------------------------+
| IPE    | Innovation in position (East component)                  |
+--------+----------------------------------------------------------+
| IPD    | Innovation in position (Down component)                  |
+--------+----------------------------------------------------------+
| IMX    | Innovation in magnetic field strength (X-axis component) |
+--------+----------------------------------------------------------+
| IMY    | Innovation in magnetic field strength (Y-axis component) |
+--------+----------------------------------------------------------+
| IMZ    | Innovation in magnetic field strength (Z-axis component) |
+--------+----------------------------------------------------------+
| IYAW   | Innovation in vehicle yaw                                |
+--------+----------------------------------------------------------+
| IVT    | Innovation in true-airspeed                              |
+--------+----------------------------------------------------------+


.. _NKF4:

NKF4: EKF2 variances
~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------------------+
| TimeUS | Time since system startup                               |
+--------+---------------------------------------------------------+
| C      | EKF2 core this data is for                              |
+--------+---------------------------------------------------------+
| SV     | Square root of the velocity variance                    |
+--------+---------------------------------------------------------+
| SP     | Square root of the position variance                    |
+--------+---------------------------------------------------------+
| SH     | Square root of the height variance                      |
+--------+---------------------------------------------------------+
| SM     | Magnetic field variance                                 |
+--------+---------------------------------------------------------+
| SVT    | Square root of the total airspeed variance              |
+--------+---------------------------------------------------------+
| errRP  | Filtered error in roll/pitch estimate                   |
+--------+---------------------------------------------------------+
| OFN    | Most recent position recent magnitude (North component) |
+--------+---------------------------------------------------------+
| OFE    | Most recent position recent magnitude (East component)  |
+--------+---------------------------------------------------------+
| FS     | Filter fault status                                     |
+--------+---------------------------------------------------------+
| TS     | Filter timeout status                                   |
+--------+---------------------------------------------------------+
| SS     | Filter solution status                                  |
+--------+---------------------------------------------------------+
| GPS    | Filter GPS status                                       |
+--------+---------------------------------------------------------+
| PI     | Primary core index                                      |
+--------+---------------------------------------------------------+


.. _NKF5:

NKF5: EKF2 Sensor innovations (primary core) and general dumping ground
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------------------------------------+
| TimeUS | Time since system startup                                                        |
+--------+----------------------------------------------------------------------------------+
| NI     | Normalised flow variance                                                         |
+--------+----------------------------------------------------------------------------------+
| FIX    | Optical flow LOS rate vector innovations from the main nav filter (X-axis)       |
+--------+----------------------------------------------------------------------------------+
| FIY    | Optical flow LOS rate vector innovations from the main nav filter (Y-axis)       |
+--------+----------------------------------------------------------------------------------+
| AFI    | Optical flow LOS rate innovation from terrain offset estimator                   |
+--------+----------------------------------------------------------------------------------+
| HAGL   | Height above ground level                                                        |
+--------+----------------------------------------------------------------------------------+
| offset | Estimated vertical position of the terrain relative to the nav filter zero datum |
+--------+----------------------------------------------------------------------------------+
| RI     | Range finder innovations                                                         |
+--------+----------------------------------------------------------------------------------+
| rng    | Measured range                                                                   |
+--------+----------------------------------------------------------------------------------+
| Herr   | Filter ground offset state error                                                 |
+--------+----------------------------------------------------------------------------------+
| eAng   | Magnitude of angular error                                                       |
+--------+----------------------------------------------------------------------------------+
| eVel   | Magnitude of velocity error                                                      |
+--------+----------------------------------------------------------------------------------+
| ePos   | Magnitude of position error                                                      |
+--------+----------------------------------------------------------------------------------+


.. _NKQ:

NKQ: EKF2 quaternion defining the rotation from NED to XYZ (autopilot) axes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------+
| TimeUS | Time since system startup  |
+--------+----------------------------+
| C      | EKF2 core this data is for |
+--------+----------------------------+
| Q1     | Quaternion a term          |
+--------+----------------------------+
| Q2     | Quaternion b term          |
+--------+----------------------------+
| Q3     | Quaternion c term          |
+--------+----------------------------+
| Q4     | Quaternion d term          |
+--------+----------------------------+


.. _NKT:

NKT: EKF timing information
~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------------------------------+
| TimeUS | Time since system startup                                              |
+--------+------------------------------------------------------------------------+
| C      | EKF core this message instance applies to                              |
+--------+------------------------------------------------------------------------+
| Cnt    | count of samples used to create this message                           |
+--------+------------------------------------------------------------------------+
| IMUMin | smallest IMU sample interval                                           |
+--------+------------------------------------------------------------------------+
| IMUMax | largest IMU sample interval                                            |
+--------+------------------------------------------------------------------------+
| EKFMin | low-passed achieved average time step rate for the EKF (minimum)       |
+--------+------------------------------------------------------------------------+
| EKFMax | low-passed achieved average time step rate for the EKF (maximum)       |
+--------+------------------------------------------------------------------------+
| AngMin | accumulated measurement time interval for the delta angle (minimum)    |
+--------+------------------------------------------------------------------------+
| AngMax | accumulated measurement time interval for the delta angle (maximum)    |
+--------+------------------------------------------------------------------------+
| VMin   | accumulated measurement time interval for the delta velocity (minimum) |
+--------+------------------------------------------------------------------------+
| VMax   | accumulated measurement time interval for the delta velocity (maximum) |
+--------+------------------------------------------------------------------------+


.. _NKY0:

NKY0: EKF2 Yaw Estimator States
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------------------+
| TimeUS | Time since system startup                                      |
+--------+----------------------------------------------------------------+
| C      | EKF2 core this data is for                                     |
+--------+----------------------------------------------------------------+
| YC     | GSF yaw estimate (rad)                                         |
+--------+----------------------------------------------------------------+
| YCS    | GSF yaw estimate 1-Sigma uncertainty (rad)                     |
+--------+----------------------------------------------------------------+
| Y0     | Yaw estimate from individual EKF filter 0 (rad)                |
+--------+----------------------------------------------------------------+
| Y1     | Yaw estimate from individual EKF filter 1 (rad)                |
+--------+----------------------------------------------------------------+
| Y2     | Yaw estimate from individual EKF filter 2 (rad)                |
+--------+----------------------------------------------------------------+
| Y3     | Yaw estimate from individual EKF filter 3 (rad)                |
+--------+----------------------------------------------------------------+
| Y4     | Yaw estimate from individual EKF filter 4 (rad)                |
+--------+----------------------------------------------------------------+
| W0     | Weighting applied to yaw estimate from individual EKF filter 0 |
+--------+----------------------------------------------------------------+
| W1     | Weighting applied to yaw estimate from individual EKF filter 1 |
+--------+----------------------------------------------------------------+
| W2     | Weighting applied to yaw estimate from individual EKF filter 2 |
+--------+----------------------------------------------------------------+
| W3     | Weighting applied to yaw estimate from individual EKF filter 3 |
+--------+----------------------------------------------------------------+
| W4     | Weighting applied to yaw estimate from individual EKF filter 4 |
+--------+----------------------------------------------------------------+


.. _NKY1:

NKY1: EKF2 Yaw Estimator Innovations
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------------+
| TimeUS | Time since system startup                                    |
+--------+--------------------------------------------------------------+
| C      | EKF2 core this data is for                                   |
+--------+--------------------------------------------------------------+
| IVN0   | North velocity innovation from individual EKF filter 0 (m/s) |
+--------+--------------------------------------------------------------+
| IVN1   | North velocity innovation from individual EKF filter 1 (m/s) |
+--------+--------------------------------------------------------------+
| IVN2   | North velocity innovation from individual EKF filter 2 (m/s) |
+--------+--------------------------------------------------------------+
| IVN3   | North velocity innovation from individual EKF filter 3 (m/s) |
+--------+--------------------------------------------------------------+
| IVN4   | North velocity innovation from individual EKF filter 4 (m/s) |
+--------+--------------------------------------------------------------+
| IVE0   | East velocity innovation from individual EKF filter 0 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE1   | East velocity innovation from individual EKF filter 1 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE2   | East velocity innovation from individual EKF filter 2 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE3   | East velocity innovation from individual EKF filter 3 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE4   | East velocity innovation from individual EKF filter 4 (m/s)  |
+--------+--------------------------------------------------------------+


.. _OABR:

OABR: Object avoidance (Bendy Ruler) diagnostics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------------------+
| TimeUS | Time since system startup                       |
+--------+-------------------------------------------------+
| Active | True if Bendy Ruler avoidance is being used     |
+--------+-------------------------------------------------+
| DesYaw | Best yaw chosen to avoid obstacle               |
+--------+-------------------------------------------------+
| Yaw    | Current vehicle yaw                             |
+--------+-------------------------------------------------+
| Mar    | Margin from path to obstacle on best yaw chosen |
+--------+-------------------------------------------------+
| DLat   | Destination latitude                            |
+--------+-------------------------------------------------+
| DLng   | Destination longitude                           |
+--------+-------------------------------------------------+
| OALat  | Intermediate location chosen for avoidance      |
+--------+-------------------------------------------------+
| OALng  | Intermediate location chosen for avoidance      |
+--------+-------------------------------------------------+


.. _OADJ:

OADJ: Object avoidance (Dijkstra) diagnostics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+-----------+-----------------------------------------------------+
| TimeUS    | Time since system startup                           |
+-----------+-----------------------------------------------------+
| State     | Dijkstra avoidance library state                    |
+-----------+-----------------------------------------------------+
| Err       | Dijkstra library error condition                    |
+-----------+-----------------------------------------------------+
| CurrPoint | Destination point in calculated path to destination |
+-----------+-----------------------------------------------------+
| TotPoints | Number of points in path to destination             |
+-----------+-----------------------------------------------------+
| DLat      | Destination latitude                                |
+-----------+-----------------------------------------------------+
| DLng      | Destination longitude                               |
+-----------+-----------------------------------------------------+
| OALat     | Object Avoidance chosen destination point latitude  |
+-----------+-----------------------------------------------------+
| OALng     | Object Avoidance chosen destination point longitude |
+-----------+-----------------------------------------------------+


.. _OF:

OF: Optical flow sensor data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------+
| TimeUS | Time since system startup     |
+--------+-------------------------------+
| Qual   | Estimated sensor data quality |
+--------+-------------------------------+
| flowX  | Sensor flow rate, X-axis      |
+--------+-------------------------------+
| flowY  | Sensor flow rate,Y-axis       |
+--------+-------------------------------+
| bodyX  | derived velocity, X-axis      |
+--------+-------------------------------+
| bodyY  | derived velocity, Y-axis      |
+--------+-------------------------------+


.. _ORGN:

ORGN: Vehicle navigation origin or other notable position
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Type   | Position type             |
+--------+---------------------------+
| Lat    | Position latitude         |
+--------+---------------------------+
| Lng    | Position longitude        |
+--------+---------------------------+
| Alt    | Position altitude         |
+--------+---------------------------+


.. _PARM:

PARM: parameter value
~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| Name   | parameter name            |
+--------+---------------------------+
| Value  | parameter vlaue           |
+--------+---------------------------+


.. _PIDA:

PIDA: Proportional/Integral/Derivative gain values for Roll/Pitch/Yaw/Z/Steering
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------+
| TimeUS | Time since system startup                   |
+--------+---------------------------------------------+
| Tar    | desired value                               |
+--------+---------------------------------------------+
| Act    | achieved value                              |
+--------+---------------------------------------------+
| Err    | error between target and achieved           |
+--------+---------------------------------------------+
| P      | proportional part of PID                    |
+--------+---------------------------------------------+
| I      | integral part of PID                        |
+--------+---------------------------------------------+
| D      | derivative part of PID                      |
+--------+---------------------------------------------+
| FF     | controller feed-forward portion of response |
+--------+---------------------------------------------+


.. _PIDP:

PIDP: Proportional/Integral/Derivative gain values for Roll/Pitch/Yaw/Z/Steering
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------+
| TimeUS | Time since system startup                   |
+--------+---------------------------------------------+
| Tar    | desired value                               |
+--------+---------------------------------------------+
| Act    | achieved value                              |
+--------+---------------------------------------------+
| Err    | error between target and achieved           |
+--------+---------------------------------------------+
| P      | proportional part of PID                    |
+--------+---------------------------------------------+
| I      | integral part of PID                        |
+--------+---------------------------------------------+
| D      | derivative part of PID                      |
+--------+---------------------------------------------+
| FF     | controller feed-forward portion of response |
+--------+---------------------------------------------+


.. _PIDR:

PIDR: Proportional/Integral/Derivative gain values for Roll/Pitch/Yaw/Z/Steering
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------+
| TimeUS | Time since system startup                   |
+--------+---------------------------------------------+
| Tar    | desired value                               |
+--------+---------------------------------------------+
| Act    | achieved value                              |
+--------+---------------------------------------------+
| Err    | error between target and achieved           |
+--------+---------------------------------------------+
| P      | proportional part of PID                    |
+--------+---------------------------------------------+
| I      | integral part of PID                        |
+--------+---------------------------------------------+
| D      | derivative part of PID                      |
+--------+---------------------------------------------+
| FF     | controller feed-forward portion of response |
+--------+---------------------------------------------+


.. _PIDS:

PIDS: Proportional/Integral/Derivative gain values for Roll/Pitch/Yaw/Z/Steering
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------+
| TimeUS | Time since system startup                   |
+--------+---------------------------------------------+
| Tar    | desired value                               |
+--------+---------------------------------------------+
| Act    | achieved value                              |
+--------+---------------------------------------------+
| Err    | error between target and achieved           |
+--------+---------------------------------------------+
| P      | proportional part of PID                    |
+--------+---------------------------------------------+
| I      | integral part of PID                        |
+--------+---------------------------------------------+
| D      | derivative part of PID                      |
+--------+---------------------------------------------+
| FF     | controller feed-forward portion of response |
+--------+---------------------------------------------+


.. _PIDY:

PIDY: Proportional/Integral/Derivative gain values for Roll/Pitch/Yaw/Z/Steering
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------+
| TimeUS | Time since system startup                   |
+--------+---------------------------------------------+
| Tar    | desired value                               |
+--------+---------------------------------------------+
| Act    | achieved value                              |
+--------+---------------------------------------------+
| Err    | error between target and achieved           |
+--------+---------------------------------------------+
| P      | proportional part of PID                    |
+--------+---------------------------------------------+
| I      | integral part of PID                        |
+--------+---------------------------------------------+
| D      | derivative part of PID                      |
+--------+---------------------------------------------+
| FF     | controller feed-forward portion of response |
+--------+---------------------------------------------+


.. _PL:

PL: Precision Landing messages
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+------------+---------------------------------------------------------------------+
| TimeUS     | Time since system startup                                           |
+------------+---------------------------------------------------------------------+
| Heal       | True if Precision Landing is healthy                                |
+------------+---------------------------------------------------------------------+
| TAcq       | True if landing target is detected                                  |
+------------+---------------------------------------------------------------------+
| pX         | Target position relative to vehicle, X-Axis (0 if target not found) |
+------------+---------------------------------------------------------------------+
| pY         | Target position relative to vehicle, Y-Axis (0 if target not found) |
+------------+---------------------------------------------------------------------+
| vX         | Target velocity relative to vehicle, X-Axis (0 if target not found) |
+------------+---------------------------------------------------------------------+
| vY         | Target velocity relative to vehicle, Y-Axis (0 if target not found) |
+------------+---------------------------------------------------------------------+
| mX         | Target's relative to origin postion as 3-D Vector, X-Axis           |
+------------+---------------------------------------------------------------------+
| mY         | Target's relative to origin postion as 3-D Vector, Y-Axis           |
+------------+---------------------------------------------------------------------+
| mZ         | Target's relative to origin postion as 3-D Vector, Z-Axis           |
+------------+---------------------------------------------------------------------+
| LastMeasUS | Time when target was last detected                                  |
+------------+---------------------------------------------------------------------+
| EKFOutl    | EKF's outlier count                                                 |
+------------+---------------------------------------------------------------------+
| Est        | Type of estimator used                                              |
+------------+---------------------------------------------------------------------+


.. _PM:

PM: autopilot system performance and general data dumping ground
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------------------------------------------------+
| TimeUS | Time since system startup                                                     |
+--------+-------------------------------------------------------------------------------+
| NLon   | Number of long loops detected                                                 |
+--------+-------------------------------------------------------------------------------+
| NLoop  | Number of measurement loops for this message                                  |
+--------+-------------------------------------------------------------------------------+
| MaxT   | Maximum loop time                                                             |
+--------+-------------------------------------------------------------------------------+
| Mem    | Free memory available                                                         |
+--------+-------------------------------------------------------------------------------+
| Load   | System processor load                                                         |
+--------+-------------------------------------------------------------------------------+
| IntE   | Internal error mask; which internal errors have been detected                 |
+--------+-------------------------------------------------------------------------------+
| IntEC  | Internal error count; how many internal errors have been detected             |
+--------+-------------------------------------------------------------------------------+
| SPIC   | Number of SPI transactions processed                                          |
+--------+-------------------------------------------------------------------------------+
| I2CC   | Number of i2c transactions processed                                          |
+--------+-------------------------------------------------------------------------------+
| I2CI   | Number of i2c interrupts serviced                                             |
+--------+-------------------------------------------------------------------------------+
| ExUS   | number of microseconds being added to each loop to address scheduler overruns |
+--------+-------------------------------------------------------------------------------+


.. _POS:

POS: Canonical vehicle position
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------------+----------------------------------------------------------+
| TimeUS       | Time since system startup                                |
+--------------+----------------------------------------------------------+
| Lat          | Canonical vehicle latitude                               |
+--------------+----------------------------------------------------------+
| Lng          | Canonical vehicle longitude                              |
+--------------+----------------------------------------------------------+
| Alt          | Canonical vehicle altitude                               |
+--------------+----------------------------------------------------------+
| RelHomeAlt   | Canonical vehicle altitude relative to home              |
+--------------+----------------------------------------------------------+
| RelOriginAlt | Canonical vehicle altitude relative to navigation origin |
+--------------+----------------------------------------------------------+


.. _POWR:

POWR: System power information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------+
| TimeUS | Time since system startup     |
+--------+-------------------------------+
| Vcc    | Flight board voltage          |
+--------+-------------------------------+
| VServo | Servo rail voltage            |
+--------+-------------------------------+
| Flags  | System power flags            |
+--------+-------------------------------+
| Safety | Hardware Safety Switch status |
+--------+-------------------------------+


.. _PRTN:

PRTN: Plane Parameter Tuning data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+-------------+-----------------------------------------------------------------------------+
| TimeUS      | Time since system startup                                                   |
+-------------+-----------------------------------------------------------------------------+
| Set         | Parameter set being tuned                                                   |
+-------------+-----------------------------------------------------------------------------+
| Parm        | Parameter being tuned                                                       |
+-------------+-----------------------------------------------------------------------------+
| Value       | Current parameter value                                                     |
+-------------+-----------------------------------------------------------------------------+
| CenterValue | Center value (startpoint of current modifications) of parameter being tuned |
+-------------+-----------------------------------------------------------------------------+


.. _PRX:

PRX: Proximity sensor data
~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------+
| TimeUS | Time since system startup                        |
+--------+--------------------------------------------------+
| Health | True if proximity sensor is healthy              |
+--------+--------------------------------------------------+
| D0     | Nearest object in sector surrounding 0-degrees   |
+--------+--------------------------------------------------+
| D45    | Nearest object in sector surrounding 45-degrees  |
+--------+--------------------------------------------------+
| D90    | Nearest object in sector surrounding 90-degrees  |
+--------+--------------------------------------------------+
| D135   | Nearest object in sector surrounding 135-degrees |
+--------+--------------------------------------------------+
| D180   | Nearest object in sector surrounding 180-degrees |
+--------+--------------------------------------------------+
| D225   | Nearest object in sector surrounding 225-degrees |
+--------+--------------------------------------------------+
| D270   | Nearest object in sector surrounding 270-degrees |
+--------+--------------------------------------------------+
| D315   | Nearest object in sector surrounding 315-degrees |
+--------+--------------------------------------------------+
| DUp    | Nearest object in upwards direction              |
+--------+--------------------------------------------------+
| CAn    | Angle to closest object                          |
+--------+--------------------------------------------------+
| CDis   | Distance to closest object                       |
+--------+--------------------------------------------------+


.. _PSC:

PSC: Position Control data
~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------+
| TimeUS | Time since system startup                  |
+--------+--------------------------------------------+
| TPX    | Target position relative to origin, X-axis |
+--------+--------------------------------------------+
| TPY    | Target position relative to origin, Y-axis |
+--------+--------------------------------------------+
| PX     | Position relative to origin, X-axis        |
+--------+--------------------------------------------+
| PY     | Position relative to origin, Y-axis        |
+--------+--------------------------------------------+
| TVX    | Target velocity, X-axis                    |
+--------+--------------------------------------------+
| TVY    | Target velocity, Y-axis                    |
+--------+--------------------------------------------+
| VX     | Velocity, X-axis                           |
+--------+--------------------------------------------+
| VY     | Velocity, Y-axis                           |
+--------+--------------------------------------------+
| TAX    | Target acceleration, X-axis                |
+--------+--------------------------------------------+
| TAY    | Target acceleration, Y-axis                |
+--------+--------------------------------------------+
| AX     | Acceleration, X-axis                       |
+--------+--------------------------------------------+
| AY     | Acceleration, Y-axis                       |
+--------+--------------------------------------------+


.. _PTUN:

PTUN: Parameter Tuning information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------+
| TimeUS | Time since system startup                      |
+--------+------------------------------------------------+
| Param  | Parameter being tuned                          |
+--------+------------------------------------------------+
| TunVal | Normalized value used inside tuning() function |
+--------+------------------------------------------------+
| TunMin | Tuning minimum limit                           |
+--------+------------------------------------------------+
| TunMax | Tuning maximum limit                           |
+--------+------------------------------------------------+


.. _RAD:

RAD: Telemetry radio statistics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+----------------------------------------------+
| TimeUS   | Time since system startup                    |
+----------+----------------------------------------------+
| RSSI     | RSSI                                         |
+----------+----------------------------------------------+
| RemRSSI  | RSSI reported from remote radio              |
+----------+----------------------------------------------+
| TxBuf    | number of bytes in radio ready to be sent    |
+----------+----------------------------------------------+
| Noise    | local noise floor                            |
+----------+----------------------------------------------+
| RemNoise | local noise floor reported from remote radio |
+----------+----------------------------------------------+
| RxErrors | damaged packet count                         |
+----------+----------------------------------------------+
| Fixed    | fixed damaged packet count                   |
+----------+----------------------------------------------+


.. _RALY:

RALY: Rally point information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------+
| TimeUS | Time since system startup            |
+--------+--------------------------------------+
| Tot    | total number of rally points onboard |
+--------+--------------------------------------+
| Seq    | this rally point's sequence number   |
+--------+--------------------------------------+
| Lat    | latitude of rally point              |
+--------+--------------------------------------+
| Lng    | longitude of rally point             |
+--------+--------------------------------------+
| Alt    | altitude of rally point              |
+--------+--------------------------------------+


.. _RATE:

RATE: Desired and achieved vehicle attitude rates
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------------------+
| TimeUS | Time since system startup                               |
+--------+---------------------------------------------------------+
| RDes   | vehicle desired roll rate                               |
+--------+---------------------------------------------------------+
| R      | achieved vehicle roll rate                              |
+--------+---------------------------------------------------------+
| ROut   | normalized output for Roll                              |
+--------+---------------------------------------------------------+
| PDes   | vehicle desired pitch rate                              |
+--------+---------------------------------------------------------+
| P      | vehicle pitch rate                                      |
+--------+---------------------------------------------------------+
| POut   | normalized output for Pitch                             |
+--------+---------------------------------------------------------+
| YDes   | vehicle desired yaw rate                                |
+--------+---------------------------------------------------------+
| Y      | achieved vehicle yaw rate                               |
+--------+---------------------------------------------------------+
| YOut   | normalized output for Yaw                               |
+--------+---------------------------------------------------------+
| ADes   | desired vehicle vertical acceleration                   |
+--------+---------------------------------------------------------+
| A      | achieved vehicle vertical acceleration                  |
+--------+---------------------------------------------------------+
| AOut   | percentage of vertical thrust output current being used |
+--------+---------------------------------------------------------+


.. _RCDA:

RCDA: Raw RC data
~~~~~~~~~~~~~~~~~
+--------+----------------------------------+
| TimeUS | Time since system startup        |
+--------+----------------------------------+
| TS     | data arrival timestamp           |
+--------+----------------------------------+
| Prot   | Protocol currently being decoded |
+--------+----------------------------------+
| Len    | Number of valid bytes in message |
+--------+----------------------------------+
| U0     | first quartet of bytes           |
+--------+----------------------------------+
| U1     | second quartet of bytes          |
+--------+----------------------------------+
| U2     | third quartet of bytes           |
+--------+----------------------------------+
| U3     | fourth quartet of bytes          |
+--------+----------------------------------+
| U4     | fifth quartet of bytes           |
+--------+----------------------------------+
| U5     | sixth quartet of bytes           |
+--------+----------------------------------+
| U6     | seventh quartet of bytes         |
+--------+----------------------------------+
| U7     | eight quartet of bytes           |
+--------+----------------------------------+
| U8     | ninth quartet of bytes           |
+--------+----------------------------------+
| U9     | tenth quartet of bytes           |
+--------+----------------------------------+


.. _RCIN:

RCIN: RC input channels to vehicle
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| C1     | channel 1 input           |
+--------+---------------------------+
| C2     | channel 2 input           |
+--------+---------------------------+
| C3     | channel 3 input           |
+--------+---------------------------+
| C4     | channel 4 input           |
+--------+---------------------------+
| C5     | channel 5 input           |
+--------+---------------------------+
| C6     | channel 6 input           |
+--------+---------------------------+
| C7     | channel 7 input           |
+--------+---------------------------+
| C8     | channel 8 input           |
+--------+---------------------------+
| C9     | channel 9 input           |
+--------+---------------------------+
| C10    | channel 10 input          |
+--------+---------------------------+
| C11    | channel 11 input          |
+--------+---------------------------+
| C12    | channel 12 input          |
+--------+---------------------------+
| C13    | channel 13 input          |
+--------+---------------------------+
| C14    | channel 14 input          |
+--------+---------------------------+


.. _RCOU:

RCOU: Servo channel output values
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| C1     | channel 1 output          |
+--------+---------------------------+
| C2     | channel 2 output          |
+--------+---------------------------+
| C3     | channel 3 output          |
+--------+---------------------------+
| C4     | channel 4 output          |
+--------+---------------------------+
| C5     | channel 5 output          |
+--------+---------------------------+
| C6     | channel 6 output          |
+--------+---------------------------+
| C7     | channel 7 output          |
+--------+---------------------------+
| C8     | channel 8 output          |
+--------+---------------------------+
| C9     | channel 9 output          |
+--------+---------------------------+
| C10    | channel 10 output         |
+--------+---------------------------+
| C11    | channel 11 output         |
+--------+---------------------------+
| C12    | channel 12 output         |
+--------+---------------------------+
| C13    | channel 13 output         |
+--------+---------------------------+
| C14    | channel 14 output         |
+--------+---------------------------+


.. _RFND:

RFND: Rangefinder sensor information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+-----------------------------------------------+
| TimeUS   | Time since system startup                     |
+----------+-----------------------------------------------+
| Instance | rangefinder instance number this data is from |
+----------+-----------------------------------------------+
| Dist     | Reported distance from sensor                 |
+----------+-----------------------------------------------+
| Stat     | Sensor state                                  |
+----------+-----------------------------------------------+
| Orient   | Sensor orientation                            |
+----------+-----------------------------------------------+


.. _RPM:

RPM: Data from RPM sensors
~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| rpm1   | First sensor's data       |
+--------+---------------------------+
| rpm2   | Second sensor's data      |
+--------+---------------------------+


.. _RSSI:

RSSI: Received Signal Strength Indicator for RC receiver
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| RXRSSI | RSSI                      |
+--------+---------------------------+


.. _SBPH:

SBPH: Swift Health Data
~~~~~~~~~~~~~~~~~~~~~~~
+------------+--------------------------------------------------+
| TimeUS     | Time since system startup                        |
+------------+--------------------------------------------------+
| CrcError   | Number of packet CRC errors on serial connection |
+------------+--------------------------------------------------+
| LastInject | Timestamp of last raw data injection to GPS      |
+------------+--------------------------------------------------+
| IARhyp     | Current number of integer ambiguity hypotheses   |
+------------+--------------------------------------------------+


.. _SBRH:

SBRH: Swift Raw Message Data
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+--------------------------------------+
| TimeUS   | Time since system startup            |
+----------+--------------------------------------+
| msg_flag | Swift message type                   |
+----------+--------------------------------------+
| 1        | Sender ID                            |
+----------+--------------------------------------+
| 2        | index; always 1                      |
+----------+--------------------------------------+
| 3        | pages; number of pages received      |
+----------+--------------------------------------+
| 4        | msg length; number of bytes received |
+----------+--------------------------------------+
| 5        | unused; always zero                  |
+----------+--------------------------------------+
| 6        | data received from device            |
+----------+--------------------------------------+


.. _SIDD:

SIDD: System ID data
~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------+
| TimeUS | Time since system startup        |
+--------+----------------------------------+
| Time   | Time reference for waveform      |
+--------+----------------------------------+
| Targ   | Current waveform sample          |
+--------+----------------------------------+
| F      | Instantaneous waveform frequency |
+--------+----------------------------------+
| Gx     | Delta angle, X-Axis              |
+--------+----------------------------------+
| Gy     | Delta angle, Y-Axis              |
+--------+----------------------------------+
| Gz     | Delta angle, Z-Axis              |
+--------+----------------------------------+
| Ax     | Delta velocity, X-Axis           |
+--------+----------------------------------+
| Ay     | Delta velocity, Y-Axis           |
+--------+----------------------------------+
| Az     | Delta velocity, Z-Axis           |
+--------+----------------------------------+


.. _SIDS:

SIDS: System ID settings
~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------------+
| TimeUS | Time since system startup                         |
+--------+---------------------------------------------------+
| Ax     | The axis which is being excited                   |
+--------+---------------------------------------------------+
| Mag    | Magnitude of the chirp waveform                   |
+--------+---------------------------------------------------+
| FSt    | Frequency at the start of chirp                   |
+--------+---------------------------------------------------+
| FSp    | Frequency at the end of chirp                     |
+--------+---------------------------------------------------+
| TFin   | Time to reach maximum amplitude of chirp          |
+--------+---------------------------------------------------+
| TC     | Time at constant frequency before chirp starts    |
+--------+---------------------------------------------------+
| TR     | Time taken to complete chirp waveform             |
+--------+---------------------------------------------------+
| TFout  | Time to reach zero amplitude after chirp finishes |
+--------+---------------------------------------------------+


.. _SIM:

SIM: SITL simulator state
~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------+
| TimeUS | Time since system startup       |
+--------+---------------------------------+
| Roll   | Simulated roll                  |
+--------+---------------------------------+
| Pitch  | Simulated pitch                 |
+--------+---------------------------------+
| Yaw    | Simulated yaw                   |
+--------+---------------------------------+
| Alt    | Simulated altitude              |
+--------+---------------------------------+
| Lat    | Simulated latitude              |
+--------+---------------------------------+
| Lng    | Simulated longitude             |
+--------+---------------------------------+
| Q1     | Attitude quaternion component 1 |
+--------+---------------------------------+
| Q2     | Attitude quaternion component 2 |
+--------+---------------------------------+
| Q3     | Attitude quaternion component 3 |
+--------+---------------------------------+
| Q4     | Attitude quaternion component 4 |
+--------+---------------------------------+


.. _SITL:

SITL: Simulation data
~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------+
| TimeUS | Time since system startup      |
+--------+--------------------------------+
| VN     | Velocity - North component     |
+--------+--------------------------------+
| VE     | Velocity - East component      |
+--------+--------------------------------+
| VD     | Velocity - Down component      |
+--------+--------------------------------+
| AN     | Acceleration - North component |
+--------+--------------------------------+
| AE     | Acceleration - East component  |
+--------+--------------------------------+
| AD     | Acceleration - Down component  |
+--------+--------------------------------+
| PN     | Position - North component     |
+--------+--------------------------------+
| PE     | Position - East component      |
+--------+--------------------------------+
| PD     | Position - Down component      |
+--------+--------------------------------+


.. _SMOO:

SMOO: Smoothed sensor data fed to EKF to avoid inconsistencies
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------+
| TimeUS | Time since system startup        |
+--------+----------------------------------+
| AEx    | Angular Velocity (around x-axis) |
+--------+----------------------------------+
| AEy    | Angular Velocity (around y-axis) |
+--------+----------------------------------+
| AEz    | Angular Velocity (around z-axis) |
+--------+----------------------------------+
| DPx    | Velocity (along x-axis)          |
+--------+----------------------------------+
| DPy    | Velocity (along y-axis)          |
+--------+----------------------------------+
| DPz    | Velocity (along z-axis)          |
+--------+----------------------------------+
| R      | Roll                             |
+--------+----------------------------------+
| P      | Pitch                            |
+--------+----------------------------------+
| Y      | Yaw                              |
+--------+----------------------------------+
| R2     | DCM Roll                         |
+--------+----------------------------------+
| P2     | DCM Pitch                        |
+--------+----------------------------------+
| Y2     | DCM Yaw                          |
+--------+----------------------------------+


.. _SRTL:

SRTL: SmartRTL statistics
~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------------------+
| TimeUS | Time since system startup                                  |
+--------+------------------------------------------------------------+
| Active | true if SmartRTL could be used right now                   |
+--------+------------------------------------------------------------+
| NumPts | number of points currently in use                          |
+--------+------------------------------------------------------------+
| MaxPts | maximum number of points that could be used                |
+--------+------------------------------------------------------------+
| Action | most recent internal action taken by SRTL library          |
+--------+------------------------------------------------------------+
| N      | point associated with most recent action (North component) |
+--------+------------------------------------------------------------+
| E      | point associated with most recent action (East component)  |
+--------+------------------------------------------------------------+
| D      | point associated with most recent action (Down component)  |
+--------+------------------------------------------------------------+


.. _TERR:

TERR: Terrain database infomration
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+-------------------------------------+
| TimeUS  | Time since system startup           |
+---------+-------------------------------------+
| Status  | Terrain database status             |
+---------+-------------------------------------+
| Lat     | Current vehicle latitude            |
+---------+-------------------------------------+
| Lng     | Current vehicle longitude           |
+---------+-------------------------------------+
| Spacing | terrain Tile spacing                |
+---------+-------------------------------------+
| TerrH   | current Terrain height              |
+---------+-------------------------------------+
| CHeight | Vehicle height above terrain        |
+---------+-------------------------------------+
| Pending | Number of tile requests outstanding |
+---------+-------------------------------------+
| Loaded  | Number of tiles in memory           |
+---------+-------------------------------------+


.. _THRO:

THRO: Throw Mode messages
~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------------------------------+
| TimeUS | Time since system startup                                              |
+--------+------------------------------------------------------------------------+
| Stage  | Current stage of the Throw Mode                                        |
+--------+------------------------------------------------------------------------+
| Vel    | Magnitude of the velocity vector                                       |
+--------+------------------------------------------------------------------------+
| VelZ   | Vertical Velocity                                                      |
+--------+------------------------------------------------------------------------+
| Acc    | Magnitude of the vector of the current acceleration                    |
+--------+------------------------------------------------------------------------+
| AccEfZ | Vertical earth frame accelerometer value                               |
+--------+------------------------------------------------------------------------+
| Throw  | True if a throw has been detected since entering this mode             |
+--------+------------------------------------------------------------------------+
| AttOk  | True if the vehicle is upright                                         |
+--------+------------------------------------------------------------------------+
| HgtOk  | True if the vehicle is within 50cm of the demanded height              |
+--------+------------------------------------------------------------------------+
| PosOk  | True if the vehicle is within 50cm of the demanded horizontal position |
+--------+------------------------------------------------------------------------+


.. _THST:

THST: Maximum thrust limitation based on battery voltage in Toy Mode
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------------------------------------------------+
| TimeUS | Time since system startup                                                             |
+--------+---------------------------------------------------------------------------------------+
| Vol    | Filtered battery voltage                                                              |
+--------+---------------------------------------------------------------------------------------+
| Mul    | Thrust multiplier between 0 and 1 to limit the output thrust based on battery voltage |
+--------+---------------------------------------------------------------------------------------+
| M1     | Motor 1 pwm output                                                                    |
+--------+---------------------------------------------------------------------------------------+
| M2     | Motor 2 pwm output                                                                    |
+--------+---------------------------------------------------------------------------------------+
| M3     | Motor 3 pwm output                                                                    |
+--------+---------------------------------------------------------------------------------------+
| M4     | Motor 4 pwm output                                                                    |
+--------+---------------------------------------------------------------------------------------+


.. _TRIG:

TRIG: Camera shutter information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+---------+--------------------------------------+
| TimeUS  | Time since system startup            |
+---------+--------------------------------------+
| GPSTime | milliseconds since start of GPS week |
+---------+--------------------------------------+
| GPSWeek | weeks since 5 Jan 1980               |
+---------+--------------------------------------+
| Lat     | current latitude                     |
+---------+--------------------------------------+
| Lng     | current longitude                    |
+---------+--------------------------------------+
| Alt     | current altitude                     |
+---------+--------------------------------------+
| RelAlt  | current altitude relative to home    |
+---------+--------------------------------------+
| GPSAlt  | altitude as reported by GPS          |
+---------+--------------------------------------+
| Roll    | current vehicle roll                 |
+---------+--------------------------------------+
| Pitch   | current vehicle pitch                |
+---------+--------------------------------------+
| Yaw     | current vehicle yaw                  |
+---------+--------------------------------------+


.. _TSYN:

TSYN: Time synchronisation response information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------+
| TimeUS | Time since system startup       |
+--------+---------------------------------+
| SysID  | system ID this data is for      |
+--------+---------------------------------+
| RTT    | round trip time for this system |
+--------+---------------------------------+


.. _UBX1:

UBX1: uBlox-specific GPS information (part 1)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+------------+-------------------------------------------------+
| TimeUS     | Time since system startup                       |
+------------+-------------------------------------------------+
| Instance   | GPS instance number                             |
+------------+-------------------------------------------------+
| noisePerMS | noise level as measured by GPS                  |
+------------+-------------------------------------------------+
| jamInd     | jamming indicator; higher is more likely jammed |
+------------+-------------------------------------------------+
| aPower     | antenna power indicator; 2 is don't know        |
+------------+-------------------------------------------------+
| agcCnt     | automatic gain control monitor                  |
+------------+-------------------------------------------------+
| config     | bitmask for messages which haven't been seen    |
+------------+-------------------------------------------------+


.. _UBX2:

UBX2: uBlox-specific GPS information (part 2)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+----------+---------------------------------------+
| TimeUS   | Time since system startup             |
+----------+---------------------------------------+
| Instance | GPS instance number                   |
+----------+---------------------------------------+
| ofsI     | imbalance of I part of complex signal |
+----------+---------------------------------------+
| magI     | magnitude of I part of complex signal |
+----------+---------------------------------------+
| ofsQ     | imbalance of Q part of complex signal |
+----------+---------------------------------------+
| magQ     | magnitude of Q part of complex signal |
+----------+---------------------------------------+


.. _UNIT:

UNIT: Message mapping from single character to SI unit
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------+
| TimeUS | Time since system startup    |
+--------+------------------------------+
| Id     | character referenced by FMTU |
+--------+------------------------------+
| Label  | Unit - SI where available    |
+--------+------------------------------+


.. _VIBE:

VIBE: Processed (acceleration) vibration information
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------+
| TimeUS | Time since system startup                        |
+--------+--------------------------------------------------+
| VibeX  | Primary accelerometer filtered vibration, x-axis |
+--------+--------------------------------------------------+
| VibeY  | Primary accelerometer filtered vibration, y-axis |
+--------+--------------------------------------------------+
| VibeZ  | Primary accelerometer filtered vibration, z-axis |
+--------+--------------------------------------------------+
| Clip0  | Number of clipping events on 1st accelerometer   |
+--------+--------------------------------------------------+
| Clip1  | Number of clipping events on 2nd accelerometer   |
+--------+--------------------------------------------------+
| Clip2  | Number of clipping events on 3rd accelerometer   |
+--------+--------------------------------------------------+


.. _VISO:

VISO: Visual Odometry
~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------------+
| TimeUS | System time                                          |
+--------+------------------------------------------------------+
| dt     | Time period this data covers                         |
+--------+------------------------------------------------------+
| AngDX  | Angular change for body-frame roll axis              |
+--------+------------------------------------------------------+
| AngDY  | Angular change for body-frame pitch axis             |
+--------+------------------------------------------------------+
| AngDZ  | Angular change for body-frame z axis                 |
+--------+------------------------------------------------------+
| PosDX  | Position change for body-frame X axis (Forward-Back) |
+--------+------------------------------------------------------+
| PosDY  | Position change for body-frame Y axis (Right-Left)   |
+--------+------------------------------------------------------+
| PosDZ  | Position change for body-frame Z axis (Down-Up)      |
+--------+------------------------------------------------------+
| conf   | Confidence                                           |
+--------+------------------------------------------------------+


.. _VISP:

VISP: Vision Position
~~~~~~~~~~~~~~~~~~~~~
+---------+-------------------------------+
| TimeUS  | System time                   |
+---------+-------------------------------+
| RTimeUS | Remote system time            |
+---------+-------------------------------+
| CTimeMS | Corrected system time         |
+---------+-------------------------------+
| PX      | Position X-axis (North-South) |
+---------+-------------------------------+
| PY      | Position Y-axis (East-West)   |
+---------+-------------------------------+
| PZ      | Position Z-axis (Down-Up)     |
+---------+-------------------------------+
| Roll    | Roll lean angle               |
+---------+-------------------------------+
| Pitch   | Pitch lean angle              |
+---------+-------------------------------+
| Yaw     | Yaw angle                     |
+---------+-------------------------------+
| PErr    | Position estimate error       |
+---------+-------------------------------+
| AErr    | Attitude estimate error       |
+---------+-------------------------------+
| RstCnt  | Position reset counter        |
+---------+-------------------------------+


.. _VISV:

VISV: Vision Velocity
~~~~~~~~~~~~~~~~~~~~~
+---------+-------------------------------+
| TimeUS  | System time                   |
+---------+-------------------------------+
| RTimeUS | Remote system time            |
+---------+-------------------------------+
| CTimeMS | Corrected system time         |
+---------+-------------------------------+
| VX      | Velocity X-axis (North-South) |
+---------+-------------------------------+
| VY      | Velocity Y-axis (East-West)   |
+---------+-------------------------------+
| VZ      | Velocity Z-axis (Down-Up)     |
+---------+-------------------------------+
| VErr    | Velocity estimate error       |
+---------+-------------------------------+
| RstCnt  | Velocity reset counter        |
+---------+-------------------------------+


.. _WENC:

WENC: Wheel encoder measurements
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------+
| TimeUS | Time since system startup       |
+--------+---------------------------------+
| Dist0  | First wheel distance travelled  |
+--------+---------------------------------+
| Qual0  | Quality measurement of Dist0    |
+--------+---------------------------------+
| Dist1  | Second wheel distance travelled |
+--------+---------------------------------+
| Qual1  | Quality measurement of Dist1    |
+--------+---------------------------------+


.. _XKF0:

XKF0: EKF3 beacon sensor diagnostics
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------------------------------+
| TimeUS | Time since system startup                                              |
+--------+------------------------------------------------------------------------+
| ID     | Beacon sensor ID                                                       |
+--------+------------------------------------------------------------------------+
| rng    | Beacon range                                                           |
+--------+------------------------------------------------------------------------+
| innov  | Beacon range innovation                                                |
+--------+------------------------------------------------------------------------+
| SIV    | sqrt of beacon range innovation variance                               |
+--------+------------------------------------------------------------------------+
| TR     | Beacon range innovation consistency test ratio                         |
+--------+------------------------------------------------------------------------+
| BPN    | Beacon north position                                                  |
+--------+------------------------------------------------------------------------+
| BPE    | Beacon east position                                                   |
+--------+------------------------------------------------------------------------+
| BPD    | Beacon down position                                                   |
+--------+------------------------------------------------------------------------+
| OFH    | High estimate of vertical position offset of beacons rel to EKF origin |
+--------+------------------------------------------------------------------------+
| OFL    | Low estimate of vertical position offset of beacons rel to EKF origin  |
+--------+------------------------------------------------------------------------+
| OFN    | North position of receiver rel to EKF origin                           |
+--------+------------------------------------------------------------------------+
| OFE    | East position of receiver rel to EKF origin                            |
+--------+------------------------------------------------------------------------+
| OFD    | Down position of receiver rel to EKF origin                            |
+--------+------------------------------------------------------------------------+


.. _XKF1:

XKF1: EKF3 estimator outputs
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------+
| TimeUS | Time since system startup                        |
+--------+--------------------------------------------------+
| C      | EKF3 core this data is for                       |
+--------+--------------------------------------------------+
| Roll   | Estimated roll                                   |
+--------+--------------------------------------------------+
| Pitch  | Estimated pitch                                  |
+--------+--------------------------------------------------+
| Yaw    | Estimated yaw                                    |
+--------+--------------------------------------------------+
| VN     | Estimated velocity (North component)             |
+--------+--------------------------------------------------+
| VE     | Estimated velocity (East component)              |
+--------+--------------------------------------------------+
| VD     | Estimated velocity (Down component)              |
+--------+--------------------------------------------------+
| dPD    | Filtered derivative of vertical position (down)  |
+--------+--------------------------------------------------+
| PN     | Estimated distance from origin (North component) |
+--------+--------------------------------------------------+
| PE     | Estimated distance from origin (East component)  |
+--------+--------------------------------------------------+
| PD     | Estimated distance from origin (Down component)  |
+--------+--------------------------------------------------+
| GX     | Estimated gyro bias, X axis                      |
+--------+--------------------------------------------------+
| GY     | Estimated gyro bias, Y axis                      |
+--------+--------------------------------------------------+
| GZ     | Estimated gyro bias, Z axis                      |
+--------+--------------------------------------------------+
| OH     | Height of origin above WGS-84                    |
+--------+--------------------------------------------------+


.. _XKF2:

XKF2: EKF3 estimator secondary outputs
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+-------------------------------------------+
| TimeUS | Time since system startup                 |
+--------+-------------------------------------------+
| C      | EKF3 core this data is for                |
+--------+-------------------------------------------+
| AX     | Estimated accelerometer X bias            |
+--------+-------------------------------------------+
| AY     | Estimated accelerometer Y bias            |
+--------+-------------------------------------------+
| AZ     | Estimated accelerometer Z bias            |
+--------+-------------------------------------------+
| VWN    | Estimated wind velocity (North component) |
+--------+-------------------------------------------+
| VWE    | Estimated wind velocity (East component)  |
+--------+-------------------------------------------+
| MN     | Magnetic field strength (North component) |
+--------+-------------------------------------------+
| ME     | Magnetic field strength (East component)  |
+--------+-------------------------------------------+
| MD     | Magnetic field strength (Down component)  |
+--------+-------------------------------------------+
| MX     | Magnetic field strength (body X-axis)     |
+--------+-------------------------------------------+
| MY     | Magnetic field strength (body Y-axis)     |
+--------+-------------------------------------------+
| MZ     | Magnetic field strength (body Z-axis)     |
+--------+-------------------------------------------+
| MI     | Magnetometer used for data                |
+--------+-------------------------------------------+


.. _XKF3:

XKF3: EKF3 innovations
~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------------+
| TimeUS | Time since system startup                                |
+--------+----------------------------------------------------------+
| C      | EKF3 core this data is for                               |
+--------+----------------------------------------------------------+
| IVN    | Innovation in velocity (North component)                 |
+--------+----------------------------------------------------------+
| IVE    | Innovation in velocity (East component)                  |
+--------+----------------------------------------------------------+
| IVD    | Innovation in velocity (Down component)                  |
+--------+----------------------------------------------------------+
| IPN    | Innovation in position (North component)                 |
+--------+----------------------------------------------------------+
| IPE    | Innovation in position (East component)                  |
+--------+----------------------------------------------------------+
| IPD    | Innovation in position (Down component)                  |
+--------+----------------------------------------------------------+
| IMX    | Innovation in magnetic field strength (X-axis component) |
+--------+----------------------------------------------------------+
| IMY    | Innovation in magnetic field strength (Y-axis component) |
+--------+----------------------------------------------------------+
| IMZ    | Innovation in magnetic field strength (Z-axis component) |
+--------+----------------------------------------------------------+
| IYAW   | Innovation in vehicle yaw                                |
+--------+----------------------------------------------------------+
| IVT    | Innovation in true-airspeed                              |
+--------+----------------------------------------------------------+


.. _XKF4:

XKF4: EKF3 variances
~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------------------------------+
| TimeUS | Time since system startup                               |
+--------+---------------------------------------------------------+
| C      | EKF3 core this data is for                              |
+--------+---------------------------------------------------------+
| SV     | Square root of the velocity variance                    |
+--------+---------------------------------------------------------+
| SP     | Square root of the position variance                    |
+--------+---------------------------------------------------------+
| SH     | Square root of the height variance                      |
+--------+---------------------------------------------------------+
| SM     | Magnetic field variance                                 |
+--------+---------------------------------------------------------+
| SVT    | Square root of the total airspeed variance              |
+--------+---------------------------------------------------------+
| errRP  | Filtered error in roll/pitch estimate                   |
+--------+---------------------------------------------------------+
| OFN    | Most recent position recent magnitude (North component) |
+--------+---------------------------------------------------------+
| OFE    | Most recent position recent magnitude (East component)  |
+--------+---------------------------------------------------------+
| FS     | Filter fault status                                     |
+--------+---------------------------------------------------------+
| TS     | Filter timeout status                                   |
+--------+---------------------------------------------------------+
| SS     | Filter solution status                                  |
+--------+---------------------------------------------------------+
| GPS    | Filter GPS status                                       |
+--------+---------------------------------------------------------+
| PI     | Primary core index                                      |
+--------+---------------------------------------------------------+


.. _XKF5:

XKF5: EKF3 Sensor innovations (primary core) and general dumping ground
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------------------------------------+
| TimeUS | Time since system startup                                                        |
+--------+----------------------------------------------------------------------------------+
| NI     | Normalised flow variance                                                         |
+--------+----------------------------------------------------------------------------------+
| FIX    | Optical flow LOS rate vector innovations from the main nav filter (X-axis)       |
+--------+----------------------------------------------------------------------------------+
| FIY    | Optical flow LOS rate vector innovations from the main nav filter (Y-axis)       |
+--------+----------------------------------------------------------------------------------+
| AFI    | Optical flow LOS rate innovation from terrain offset estimator                   |
+--------+----------------------------------------------------------------------------------+
| HAGL   | Height above ground level                                                        |
+--------+----------------------------------------------------------------------------------+
| offset | Estimated vertical position of the terrain relative to the nav filter zero datum |
+--------+----------------------------------------------------------------------------------+
| RI     | Range finder innovations                                                         |
+--------+----------------------------------------------------------------------------------+
| rng    | Measured range                                                                   |
+--------+----------------------------------------------------------------------------------+
| Herr   | Filter ground offset state error                                                 |
+--------+----------------------------------------------------------------------------------+
| eAng   | Magnitude of angular error                                                       |
+--------+----------------------------------------------------------------------------------+
| eVel   | Magnitude of velocity error                                                      |
+--------+----------------------------------------------------------------------------------+
| ePos   | Magnitude of position error                                                      |
+--------+----------------------------------------------------------------------------------+


.. _XKFD:

XKFD: EKF3 Body Frame Odometry errors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------------+
| TimeUS | Time since system startup       |
+--------+---------------------------------+
| IX     | Innovation in velocity (X-axis) |
+--------+---------------------------------+
| IY     | Innovation in velocity (Y-axis) |
+--------+---------------------------------+
| IZ     | Innovation in velocity (Z-axis) |
+--------+---------------------------------+
| IVX    | Variance in velocity (X-axis)   |
+--------+---------------------------------+
| IVY    | Variance in velocity (Y-axis)   |
+--------+---------------------------------+
| IVZ    | Variance in velocity (Z-axis)   |
+--------+---------------------------------+


.. _XKFM:

XKFM: EKF3 diagnostic data for on-ground-and-not-moving check
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------+
| TimeUS | Time since system startup          |
+--------+------------------------------------+
| OGNM   | True of on ground and not moving   |
+--------+------------------------------------+
| GLR    | Gyroscope length ratio             |
+--------+------------------------------------+
| ALR    | Accelerometer length ratio         |
+--------+------------------------------------+
| GDR    | Gyroscope rate of change ratio     |
+--------+------------------------------------+
| ADR    | Accelerometer rate of change ratio |
+--------+------------------------------------+


.. _XKQ:

XKQ: EKF3 quaternion defining the rotation from NED to XYZ (autopilot) axes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------+
| TimeUS | Time since system startup  |
+--------+----------------------------+
| C      | EKF3 core this data is for |
+--------+----------------------------+
| Q1     | Quaternion a term          |
+--------+----------------------------+
| Q2     | Quaternion b term          |
+--------+----------------------------+
| Q3     | Quaternion c term          |
+--------+----------------------------+
| Q4     | Quaternion d term          |
+--------+----------------------------+


.. _XKT:

XKT: EKF timing information
~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+------------------------------------------------------------------------+
| TimeUS | Time since system startup                                              |
+--------+------------------------------------------------------------------------+
| C      | EKF core this message instance applies to                              |
+--------+------------------------------------------------------------------------+
| Cnt    | count of samples used to create this message                           |
+--------+------------------------------------------------------------------------+
| IMUMin | smallest IMU sample interval                                           |
+--------+------------------------------------------------------------------------+
| IMUMax | largest IMU sample interval                                            |
+--------+------------------------------------------------------------------------+
| EKFMin | low-passed achieved average time step rate for the EKF (minimum)       |
+--------+------------------------------------------------------------------------+
| EKFMax | low-passed achieved average time step rate for the EKF (maximum)       |
+--------+------------------------------------------------------------------------+
| AngMin | accumulated measurement time interval for the delta angle (minimum)    |
+--------+------------------------------------------------------------------------+
| AngMax | accumulated measurement time interval for the delta angle (maximum)    |
+--------+------------------------------------------------------------------------+
| VMin   | accumulated measurement time interval for the delta velocity (minimum) |
+--------+------------------------------------------------------------------------+
| VMax   | accumulated measurement time interval for the delta velocity (maximum) |
+--------+------------------------------------------------------------------------+


.. _XKV1:

XKV1: EKF3 State variances (primary core)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| V00    | Variance for state 0      |
+--------+---------------------------+
| V01    | Variance for state 1      |
+--------+---------------------------+
| V02    | Variance for state 2      |
+--------+---------------------------+
| V03    | Variance for state 3      |
+--------+---------------------------+
| V04    | Variance for state 4      |
+--------+---------------------------+
| V05    | Variance for state 5      |
+--------+---------------------------+
| V06    | Variance for state 6      |
+--------+---------------------------+
| V07    | Variance for state 7      |
+--------+---------------------------+
| V08    | Variance for state 8      |
+--------+---------------------------+
| V09    | Variance for state 9      |
+--------+---------------------------+
| V10    | Variance for state 10     |
+--------+---------------------------+
| V11    | Variance for state 11     |
+--------+---------------------------+


.. _XKV2:

XKV2: more EKF3 State Variances (primary core)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+---------------------------+
| TimeUS | Time since system startup |
+--------+---------------------------+
| V12    | Variance for state 12     |
+--------+---------------------------+
| V13    | Variance for state 13     |
+--------+---------------------------+
| V14    | Variance for state 14     |
+--------+---------------------------+
| V15    | Variance for state 15     |
+--------+---------------------------+
| V16    | Variance for state 16     |
+--------+---------------------------+
| V17    | Variance for state 17     |
+--------+---------------------------+
| V18    | Variance for state 18     |
+--------+---------------------------+
| V19    | Variance for state 19     |
+--------+---------------------------+
| V20    | Variance for state 20     |
+--------+---------------------------+
| V21    | Variance for state 21     |
+--------+---------------------------+
| V22    | Variance for state 22     |
+--------+---------------------------+
| V23    | Variance for state 23     |
+--------+---------------------------+


.. _XKY0:

XKY0: EKF3 Yaw Estimator States
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+----------------------------------------------------------------+
| TimeUS | Time since system startup                                      |
+--------+----------------------------------------------------------------+
| C      | EKF3 core this data is for                                     |
+--------+----------------------------------------------------------------+
| YC     | GSF yaw estimate (rad)                                         |
+--------+----------------------------------------------------------------+
| YCS    | GSF yaw estimate 1-Sigma uncertainty (rad)                     |
+--------+----------------------------------------------------------------+
| Y0     | Yaw estimate from individual EKF filter 0 (rad)                |
+--------+----------------------------------------------------------------+
| Y1     | Yaw estimate from individual EKF filter 1 (rad)                |
+--------+----------------------------------------------------------------+
| Y2     | Yaw estimate from individual EKF filter 2 (rad)                |
+--------+----------------------------------------------------------------+
| Y3     | Yaw estimate from individual EKF filter 3 (rad)                |
+--------+----------------------------------------------------------------+
| Y4     | Yaw estimate from individual EKF filter 4 (rad)                |
+--------+----------------------------------------------------------------+
| W0     | Weighting applied to yaw estimate from individual EKF filter 0 |
+--------+----------------------------------------------------------------+
| W1     | Weighting applied to yaw estimate from individual EKF filter 1 |
+--------+----------------------------------------------------------------+
| W2     | Weighting applied to yaw estimate from individual EKF filter 2 |
+--------+----------------------------------------------------------------+
| W3     | Weighting applied to yaw estimate from individual EKF filter 3 |
+--------+----------------------------------------------------------------+
| W4     | Weighting applied to yaw estimate from individual EKF filter 4 |
+--------+----------------------------------------------------------------+


.. _XKY1:

XKY1: EKF2 Yaw Estimator Innovations
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
+--------+--------------------------------------------------------------+
| TimeUS | Time since system startup                                    |
+--------+--------------------------------------------------------------+
| C      | EKF3 core this data is for                                   |
+--------+--------------------------------------------------------------+
| IVN0   | North velocity innovation from individual EKF filter 0 (m/s) |
+--------+--------------------------------------------------------------+
| IVN1   | North velocity innovation from individual EKF filter 1 (m/s) |
+--------+--------------------------------------------------------------+
| IVN2   | North velocity innovation from individual EKF filter 2 (m/s) |
+--------+--------------------------------------------------------------+
| IVN3   | North velocity innovation from individual EKF filter 3 (m/s) |
+--------+--------------------------------------------------------------+
| IVN4   | North velocity innovation from individual EKF filter 4 (m/s) |
+--------+--------------------------------------------------------------+
| IVE0   | East velocity innovation from individual EKF filter 0 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE1   | East velocity innovation from individual EKF filter 1 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE2   | East velocity innovation from individual EKF filter 2 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE3   | East velocity innovation from individual EKF filter 3 (m/s)  |
+--------+--------------------------------------------------------------+
| IVE4   | East velocity innovation from individual EKF filter 4 (m/s)  |
+--------+--------------------------------------------------------------+



