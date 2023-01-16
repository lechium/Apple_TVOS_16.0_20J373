//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, PBSDisplayMode;
@protocol PBSDisplayStateObserver;

@protocol PBSDisplayState <NSObject>
@property(readonly, nonatomic) NSDictionary *audioLatencies;
@property(readonly, nonatomic) _Bool deemed4KCapable;
@property(readonly, nonatomic) _Bool detectedPoorCableConnection;
@property(readonly, nonatomic) long long displayConnection;
@property(readonly, nonatomic) _Bool shouldModeSwitchForFrameRate;
@property(readonly, nonatomic) _Bool atmosEnabled;
@property(readonly, nonatomic) _Bool shouldModeSwitchForDynamicRange;
@property(readonly, nonatomic) _Bool canHandleHighBandwidthModes;
@property(readonly, nonatomic) NSString *currentDisplayID;
@property(readonly, nonatomic) NSSet *seenDisplayIDs;
@property(readonly, nonatomic) PBSDisplayMode *userSelectedDisplayMode;
@property(readonly, nonatomic) PBSDisplayMode *fallbackDisplayMode;
@property(readonly, nonatomic) PBSDisplayMode *currentDisplayMode;
@property(readonly, nonatomic) NSArray *sortedDisplayModes;
@property(readonly, nonatomic) double localeRefreshRate;
- (PBSDisplayMode *)findMatchingLocaleMode:(PBSDisplayMode *)arg1 enforceVirtualCheck:(_Bool)arg2;
- (PBSDisplayMode *)findFirstMode:(_Bool (^)(PBSDisplayMode *))arg1;
- (NSArray *)filterModes:(_Bool (^)(PBSDisplayMode *))arg1;
- (void)removeStateObserver:(id <PBSDisplayStateObserver>)arg1;
- (void)addStateObserver:(id <PBSDisplayStateObserver>)arg1;
- (_Bool)isAdvertisingHDMI2;
- (NSSet *)promotedVirtualDisplayModes;
- (NSNumber *)audioLatencyForDisplayMode:(PBSDisplayMode *)arg1;
@end

