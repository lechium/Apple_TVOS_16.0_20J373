//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SecTapToRadar : NSObject
{
    NSString *_componentID;	// 8 = 0x8
    NSString *_componentName;	// 16 = 0x10
    NSString *_componentVersion;	// 24 = 0x18
    NSString *_alert;	// 32 = 0x20
    NSString *_radarDescription;	// 40 = 0x28
    NSString *_radarnumber;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (_Bool)askUserIfTTR:(id)arg1;	// IMP=0x004000000001acb0
+ (void)triggerTapToRadar:(id)arg1;	// IMP=0x001000000001abb7
+ (void)disableTTRsEntirely;	// IMP=0x001000000001abaa
+ (_Bool)isRateLimited:(id)arg1;	// IMP=0x001000000001ab88
+ (id)keyname:(id)arg1;	// IMP=0x001000000001ab12
- (void).cxx_destruct;	// IMP=0x002000000001a962
- (void)setQueue:(id)arg1;	// IMP=0x001000000001a953
- (id)queue;	// IMP=0x001000000001a93f
@property(retain) NSString *radarnumber; // @synthesize radarnumber=_radarnumber;
@property(retain) NSString *radarDescription; // @synthesize radarDescription=_radarDescription;
@property(retain) NSString *alert; // @synthesize alert=_alert;
@property(retain) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property(retain) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain) NSString *componentID; // @synthesize componentID=_componentID;
- (void)trigger;	// IMP=0x001000000001a7fc
- (void)clearRetryTimestamp;	// IMP=0x001000000001a773
- (void)updateRetryTimestamp;	// IMP=0x001000000001a692
- (_Bool)isRateLimited;	// IMP=0x001000000001a57b
- (id)initTapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3;	// IMP=0x001000000001a42a

@end

