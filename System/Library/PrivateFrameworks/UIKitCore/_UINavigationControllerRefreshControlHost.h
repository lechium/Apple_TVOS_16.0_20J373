//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UINavigationController, UIRefreshControl, UIScrollView, UIView;
@protocol _UINavigationControllerRefreshControlHostDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerRefreshControlHost : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    id <_UINavigationControllerRefreshControlHostDelegate> _delegate;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
    double _restingHeightOfRefreshControl;	// 32 = 0x20
    UIView *_hostContainerView;	// 40 = 0x28
    double _unobstructedHeight;	// 48 = 0x30
    UIRefreshControl *_refreshControl;	// 56 = 0x38
    NSArray *_refreshControlConstraints;	// 64 = 0x40
}

+ (_Bool)canHostRefreshControlOwnedByScrollView:(id)arg1 inNavigationController:(id)arg2;	// IMP=0x001000000055f6a6
- (void).cxx_destruct;	// IMP=0x0000000000560220
@property(retain) NSArray *refreshControlConstraints; // @synthesize refreshControlConstraints=_refreshControlConstraints;
@property __weak UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) double unobstructedHeight; // @synthesize unobstructedHeight=_unobstructedHeight;
@property(retain, nonatomic) UIView *hostContainerView; // @synthesize hostContainerView=_hostContainerView;
@property(nonatomic) double restingHeightOfRefreshControl; // @synthesize restingHeightOfRefreshControl=_restingHeightOfRefreshControl;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <_UINavigationControllerRefreshControlHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (double)_alphaForRefreshingControlStateWithPossiblyObstructedContent;	// IMP=0x00000000005600ff
- (double)_thresholdForObstructedContentZeroAlpha;	// IMP=0x00000000005600bb
- (double)_thresholdForObstructedContentFullAlpha;	// IMP=0x0000000000560077
- (void)_updateFadeOutProgress;	// IMP=0x000000000055ffaf
- (void)_installRefreshControlIntoContainerView;	// IMP=0x000000000055fccc
- (void)_removeRefreshControlFromContainerView;	// IMP=0x000000000055fc26
- (void)_notifyLayoutDidChange;	// IMP=0x000000000055fb3d
@property(readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;	// IMP=0x000000000055fa30
- (void)decrementInsetHeight:(double)arg1;	// IMP=0x000000000055f9f0
- (void)incrementInsetHeight:(double)arg1;	// IMP=0x000000000055f9b0
- (void)dealloc;	// IMP=0x000000000055f948
- (_Bool)isHostingRefreshControlOwnedByScrollView:(id)arg1;	// IMP=0x000000000055f757
- (void)stopAnimations;	// IMP=0x000000000055f61b
@property(readonly, nonatomic) double fullHeightOfRefreshControl;
- (id)initWithNavigationController:(id)arg1 scrollView:(id)arg2;	// IMP=0x000000000055f42a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

