//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBCriticalRemoteBatteryAlertManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000017864b
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)presentIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001786e1
- (id)_init;	// IMP=0x00100000001786b2

@end

