//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCTargetDeviceResolver : NSObject
{
}

+ (id)stringForWatchAvailability:(unsigned long long)arg1;	// IMP=0x004000000001c1fc
+ (void)_showPromptForWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c047
+ (void)_showPromptForHomePodWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001be92
+ (void)_showPromptForHomePodAndWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001bcdd
+ (void)_showPromptForPhoneAndOtherDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001badf
+ (void)showResolutionPromptWithWatchOption:(_Bool)arg1 homePodOption:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b870
+ (_Bool)isHomePodAvailable;	// IMP=0x001000000001b868
+ (unsigned long long)watchAvailability;	// IMP=0x001000000001b85d

@end

