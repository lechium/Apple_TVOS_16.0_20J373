//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputTestingKit/NSObject-Protocol.h>

@class NSArray, NSString, TIContinuousPath, TTKKeyboardPlane;

@protocol TTKContinuousPathGenerator <NSObject>
- (TIContinuousPath *)generatePathFromString:(NSString *)arg1 timestamp:(double)arg2 duration:(double)arg3 layout:(TTKKeyboardPlane *)arg4;
- (TIContinuousPath *)generatePathFromString:(NSString *)arg1 timestamp:(double)arg2 layout:(TTKKeyboardPlane *)arg3;
- (TIContinuousPath *)generatePathFromString:(NSString *)arg1 layout:(TTKKeyboardPlane *)arg2;
- (TIContinuousPath *)generatePathFromInflectionPoints:(NSArray *)arg1 timestamp:(double)arg2 duration:(double)arg3 segmentTiming:(NSArray *)arg4 keys:(NSArray *)arg5 string:(NSString *)arg6 layout:(TTKKeyboardPlane *)arg7;
- (TIContinuousPath *)generatePathFromInflectionPoints:(NSArray *)arg1 timestamp:(double)arg2 segmentTiming:(NSArray *)arg3 keys:(NSArray *)arg4 string:(NSString *)arg5 layout:(TTKKeyboardPlane *)arg6;
- (TIContinuousPath *)generatePathFromInflectionPoints:(NSArray *)arg1 segmentTiming:(NSArray *)arg2 keys:(NSArray *)arg3 string:(NSString *)arg4 layout:(TTKKeyboardPlane *)arg5;
- (NSArray *)generateKeyCentersFromKeys:(NSArray *)arg1 string:(NSString *)arg2 layout:(TTKKeyboardPlane *)arg3;
- (NSArray *)generateKeysFromString:(NSString *)arg1 layout:(TTKKeyboardPlane *)arg2;
@end
