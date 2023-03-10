//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationGnssOdometerInfo, CLLocationMatchInfo, NSData, _CLLocationFusionInfo, _CLLocationGroundAltitude;

@interface CLLocationInternal : NSObject
{
    CDStruct_2fb123db fLocation;	// 8 = 0x8
    CLLocationMatchInfo *fMatchInfo;	// 184 = 0xb8
    _CLLocationGroundAltitude *fGroundAltitude;	// 192 = 0xc0
    double fTrustedTimestamp;	// 200 = 0xc8
    NSData *fCoarseMetaData;	// 208 = 0xd0
    _CLLocationFusionInfo *fFusionInfo;	// 216 = 0xd8
    double fRawHorizontalAccuracy;	// 224 = 0xe0
    double fRawAltitude;	// 232 = 0xe8
    double fRawVerticalAccuracy;	// 240 = 0xf0
    double fRawCourseAccuracy;	// 248 = 0xf8
    int fPositionContextState;	// 256 = 0x100
    double fProbabilityPositionContextStateIndoor;	// 264 = 0x108
    double fProbabilityPositionContextStateOutdoor;	// 272 = 0x110
    CLLocationGnssOdometerInfo *fGnssOdometerInfo;	// 280 = 0x118
}

- (void)dealloc;	// IMP=0x00000000000764e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000763a9
- (id)initWithClientLocation:(CDStruct_2fb123db)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawAltitude:(double)arg7 rawVerticalAccuracy:(double)arg8 rawCourseAccuracy:(double)arg9 positionContextStateType:(int)arg10 probabilityPositionContextStateIndoor:(double)arg11 probabilityPositionContextStateOutdoor:(double)arg12 gnssOdometerInfo:(id)arg13 coarseMetaData:(id)arg14;	// IMP=0x000000000007625e
- (id)initWithClientLocation:(CDStruct_2fb123db)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawAltitude:(double)arg7 rawVerticalAccuracy:(double)arg8 rawCourseAccuracy:(double)arg9 positionContextStateType:(int)arg10 probabilityPositionContextStateIndoor:(double)arg11 probabilityPositionContextStateOutdoor:(double)arg12 gnssOdometerInfo:(id)arg13;	// IMP=0x0000000000076202
- (id)initWithClientLocation:(CDStruct_2fb123db)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4;	// IMP=0x0000000000076197
- (id)initWithClientLocation:(CDStruct_2fb123db)arg1 clientLocationPrivate:(CDStruct_47914287)arg2 coarseMetaData:(id)arg3;	// IMP=0x0000000000076123
- (id)initWithClientLocation:(CDStruct_2fb123db)arg1 clientLocationPrivate:(CDStruct_47914287)arg2;	// IMP=0x0000000000075ec2
- (id)initWithClientLocation:(CDStruct_2fb123db)arg1 coarseMetaData:(id)arg2;	// IMP=0x0000000000075e65
- (id)initWithClientLocation:(CDStruct_2fb123db)arg1;	// IMP=0x0000000000075db8

@end

