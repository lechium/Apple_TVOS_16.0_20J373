//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CLBarometerCalibrationAbsoluteAltitude, CLBarometerCalibrationBiasData, CLBarometerCalibrationTrack, CLWaterSubmersionMeasurement, CLWaterSubmersionState;

@protocol CLBarometerCalibrationContextClient <NSObject>
- (_Bool)inOutdoorWorkout;
- (void)updateCompanionConnected:(_Bool)arg1;
- (CLBarometerCalibrationBiasData *)copyCurrentBias;
- (void)updateEstimatedWeatherWithCumulativeAscendingDelta:(unsigned int)arg1 andDescendingDelta:(unsigned int)arg2 andIosTimestamp:(double)arg3;
- (void)updateBiasUncertaintyWithPressure:(double)arg1 andTime:(double)arg2 andLat:(double)arg3 andLon:(double)arg4;
- (void)submersionMeasurementUpdate:(CLWaterSubmersionMeasurement *)arg1;
- (void)submersionStateUpdate:(CLWaterSubmersionState *)arg1;
- (void)announceMostRecentForcedGPS:(double)arg1;
- (_Bool)isInVisit;
- (CLBarometerCalibrationAbsoluteAltitude *)latestAbsoluteAltitude;
- (void)absoluteAltitudeUpdate:(CLBarometerCalibrationAbsoluteAltitude *)arg1;
- (void)stopTrack:(CLBarometerCalibrationTrack *)arg1;
- (void)startTrack:(CLBarometerCalibrationTrack *)arg1;
@end

