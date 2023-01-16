//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, VUIAccessView_tvOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController
{
    VUIAccessView_tvOS *_accessView;	// 8 = 0x8
    VUIAppSpinnerView *_loadingView;	// 16 = 0x10
    NSArray *_channels;	// 24 = 0x18
    NSMutableArray *_bundleIDs;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    _Bool _hasCalledCompletion;	// 48 = 0x30
    NSArray *_appInfos;	// 56 = 0x38
    NSArray *_appChannels;	// 64 = 0x40
    NSMutableArray *_channelIds;	// 72 = 0x48
    _Bool _shouldDenyOnCancel;	// 80 = 0x50
    CDUnknownBlockType _completionHandler;	// 88 = 0x58
}

+ (_Bool)_isHostedInRemoteViewService;	// IMP=0x006000000022c029
- (void).cxx_destruct;	// IMP=0x000000000022c449
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)preferredFocusEnvironments;	// IMP=0x000000000022c31b
- (id)cappedTraitCollection;	// IMP=0x000000000022c0f0
- (id)_watchListAppIcon;	// IMP=0x000000000022c0a3
- (void)_fetchRemoteAppInfo;	// IMP=0x000000000022b6d8
- (id)_imageForBundleID:(id)arg1;	// IMP=0x000000000022b681
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000022b4f1
- (void)_toggleLoadingScreen;	// IMP=0x000000000022b420
- (void)_setupAccessViews;	// IMP=0x000000000022a70c
- (void)_completeWithStatus:(unsigned long long)arg1;	// IMP=0x000000000022a5c2
- (void)_handleNackButton:(id)arg1;	// IMP=0x000000000022a4b6
- (void)_handleMenuGesture:(id)arg1;	// IMP=0x000000000022a2c5
- (void)_handleSeeAllButton:(id)arg1;	// IMP=0x000000000022a10c
- (void)_disallow:(id)arg1;	// IMP=0x0000000000229bee
- (void)_allow:(id)arg1;	// IMP=0x0000000000229772
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000229586
- (void)viewDidLoad;	// IMP=0x0000000000229217
- (void)_init;	// IMP=0x0000000000228a4f
- (id)init;	// IMP=0x0000000000228a10
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000228884

@end
