//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIAccessViewController;

__attribute__((visibility("hidden")))
@interface VUIVPPAManager : NSObject
{
    _Bool _alreadyInProgress;	// 8 = 0x8
    VUIAccessViewController *_accessViewController;	// 16 = 0x10
}

+ (id)_getDeniedChannels;	// IMP=0x00600000001ce98f
+ (id)_getConsentedChannels;	// IMP=0x00600000001ce717
+ (id)addUniqueChannels:(id)arg1 channels:(id)arg2;	// IMP=0x00600000001ce4cf
+ (_Bool)channelAlreadyExists:(id)arg1 channelID:(id)arg2;	// IMP=0x00600000001ce296
+ (_Bool)_isReminderDue:(id)arg1 reminderInterval:(double)arg2;	// IMP=0x00600000001ce215
+ (id)sharedInstance;	// IMP=0x00600000001cbc99
- (void).cxx_destruct;	// IMP=0x00000000001cec8b
@property(nonatomic) _Bool alreadyInProgress; // @synthesize alreadyInProgress=_alreadyInProgress;
@property(retain, nonatomic) VUIAccessViewController *accessViewController; // @synthesize accessViewController=_accessViewController;
- (id)_rootViewController;	// IMP=0x00000000001cec07
- (id)_getEligibleBulkChannels;	// IMP=0x00000000001cdcd2
- (id)_getVPPABulkChannels:(long long)arg1;	// IMP=0x00000000001cdbba
- (void)_presentVPPAConsentScreen:(id)arg1 vppaState:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cd203
- (_Bool)_isVPPAPromptDueForConfig:(id)arg1;	// IMP=0x00000000001cd005
- (_Bool)_isChannelVPPAPromptEligible:(id)arg1;	// IMP=0x00000000001ccfb5
- (void)_fetchConfigurationAndPresentVPPAIfRequired:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cc905
- (void)reloadConfigurationAfterVPPAChange;	// IMP=0x00000000001cc7c9
- (void)startVPPAConsentFlowForDeeplink:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cc2de
- (void)startVPPAConsentFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cbd26
- (id)init;	// IMP=0x00000000001cbcee

@end

