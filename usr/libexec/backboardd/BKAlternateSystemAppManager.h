//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKAlternateSystemApp, NSString;
@protocol OS_dispatch_queue;

@interface BKAlternateSystemAppManager : NSObject
{
    _Bool _blockingSystemApp;	// 8 = 0x8
    NSString *_openBundleId;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    BKAlternateSystemApp *_alternateSystemApp;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000003bd9e
- (void).cxx_destruct;	// IMP=0x002000000003b775
@property(retain, nonatomic) BKAlternateSystemApp *alternateSystemApp; // @synthesize alternateSystemApp=_alternateSystemApp;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *openBundleId; // @synthesize openBundleId=_openBundleId;
@property(nonatomic, getter=isBlockingSystemApp, setter=_setBlockingSystemApp:) _Bool blockingSystemApp;
- (void)_queue_cleanUpAfterAlternativeSystemApp:(id)arg1;	// IMP=0x001000000003b58c
- (void)unblockSystemAppForAlternateSystemAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b4ae
- (void)terminateAnyAlternateSystemApp;	// IMP=0x001000000003b3f1
- (void)terminateAlternateSystemApp:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003b2c6
- (void)openAlternateSystemApp:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3 andExitBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000003b1b0
- (void)blockSystemAppForAlternateSystemAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b0cf
@property(readonly, nonatomic) NSString *alternateSystemAppBundleIdentifier;
- (id)init;	// IMP=0x001000000003af32

@end

