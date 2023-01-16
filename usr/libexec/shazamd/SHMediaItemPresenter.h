//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHWorkerDelegate;

@interface SHMediaItemPresenter : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    id <SHWorkerDelegate> _workerDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000009abd
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property(readonly) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (double)timeRequiredToPerformWork;	// IMP=0x0010000000009a7a
- (oneway void)stop;	// IMP=0x0010000000009a74
@property(readonly, nonatomic) _Bool managesRecordingSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

