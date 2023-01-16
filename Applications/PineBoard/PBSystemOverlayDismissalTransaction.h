//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBSystemOverlayDismissalRequest, UIViewController;
@protocol PBSystemOverlayContentPresenting, PBSystemUIPresenting;

@interface PBSystemOverlayDismissalTransaction : BSTransaction
{
    PBSystemOverlayDismissalRequest *_request;	// 8 = 0x8
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    unsigned long long _sceneDeactivationReasons;	// 32 = 0x20
    id <PBSystemUIPresenting> _presentationDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001de36b
@property(readonly, nonatomic) __weak id <PBSystemUIPresenting> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) unsigned long long sceneDeactivationReasons; // @synthesize sceneDeactivationReasons=_sceneDeactivationReasons;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) UIViewController<PBSystemOverlayContentPresenting> *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) PBSystemOverlayDismissalRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x00100000001de0ae
- (_Bool)_canBeInterrupted;	// IMP=0x00100000001de0a6
- (id)initWithRequest:(id)arg1 viewController:(id)arg2 layoutLevel:(long long)arg3 deactivationReasons:(unsigned long long)arg4 presentationDelegate:(id)arg5;	// IMP=0x00100000001ddfbb
- (id)init;	// IMP=0x00100000001ddfad

@end

