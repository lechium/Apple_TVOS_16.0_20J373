//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DownloadErrorController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_errors;	// 16 = 0x10
    NSMutableOrderedSet *_scheduledErrors;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_scheduledErrorTimer;	// 32 = 0x20
}

+ (id)sharedErrorController;	// IMP=0x0040000000101f13
- (void)_scheduleErrorDisplay:(id)arg1;	// IMP=0x00200000001027ce
- (void)_displayScheduledErrors;	// IMP=0x00100000001024d5
- (void)_cancelErrorsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000102385
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x00100000001022d7
- (void)showDownloadError:(id)arg1;	// IMP=0x0010000000102052
- (void)cancelDialogsWithDownloadIdentifier:(long long)arg1;	// IMP=0x0010000000101f90
- (void)dealloc;	// IMP=0x0010000000101e75
- (id)init;	// IMP=0x0010000000101dc7

@end

