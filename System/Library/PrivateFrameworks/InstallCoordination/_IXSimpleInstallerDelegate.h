//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IXAppInstallCoordinator, NSString, NSURL;
@protocol IXInitiatingOrUpdatingCoordinator;

__attribute__((visibility("hidden")))
@interface _IXSimpleInstallerDelegate : NSObject
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    CDUnknownBlockType _progressBlock;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *_coordinator;	// 32 = 0x20
    NSURL *_moveResultToURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003c914
@property(retain, nonatomic) NSURL *moveResultToURL; // @synthesize moveResultToURL=_moveResultToURL;
@property(retain, nonatomic) IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)coordinator:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;	// IMP=0x000000000003c744
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x000000000003c616
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forApplicationRecord:(id)arg2;	// IMP=0x000000000003c47a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
