//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController
{
    _Bool _hasRetriedOnce;	// 8 = 0x8
    _Bool _hasRequestedPresentation;	// 9 = 0x9
    id <VSViewServiceHostViewControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_requestsByID;	// 24 = 0x18
    VSOptional *_currentRequest;	// 32 = 0x20
    VSViewServiceRemoteViewController *_remoteViewController;	// 40 = 0x28
    VSViewControllerFactory *_viewControllerFactory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000be61
@property(retain, nonatomic) VSViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(nonatomic) _Bool hasRequestedPresentation; // @synthesize hasRequestedPresentation=_hasRequestedPresentation;
@property(nonatomic) _Bool hasRetriedOnce; // @synthesize hasRetriedOnce=_hasRetriedOnce;
@property(retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) VSOptional *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableDictionary *requestsByID; // @synthesize requestsByID=_requestsByID;
@property(nonatomic) __weak id <VSViewServiceHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addRemoteViewControllerAsChildViewController;	// IMP=0x000000000000bc24
- (void)_removeRemoteViewControllerAsChildViewController;	// IMP=0x000000000000bb5a
- (void)_connectToViewServiceForRequest:(id)arg1;	// IMP=0x000000000000b57a
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b52d
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;	// IMP=0x000000000000b4d8
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;	// IMP=0x000000000000b483
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x000000000000b41f
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x000000000000b095
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;	// IMP=0x000000000000b031
- (void)dismissViewServiceRemoteViewController:(id)arg1;	// IMP=0x000000000000afe8
- (void)presentViewServiceRemoteViewController:(id)arg1;	// IMP=0x000000000000af93
- (_Bool)isModalInPresentation;	// IMP=0x000000000000af64
- (long long)modalPresentationStyle;	// IMP=0x000000000000af59
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x000000000000ad91
- (_Bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;	// IMP=0x000000000000ad17
- (void)_dismissViewServiceHostViewController;	// IMP=0x000000000000accb
- (void)_presentViewServiceHostViewController;	// IMP=0x000000000000ac7f
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;	// IMP=0x000000000000ab88
- (void)_didCancelRequest:(id)arg1;	// IMP=0x000000000000aa91
- (void)_request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000000a94f
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;	// IMP=0x000000000000a7e8
- (void)_didCompleteRequest:(id)arg1;	// IMP=0x000000000000a563
- (id)_requestForID:(id)arg1;	// IMP=0x000000000000a4b3
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000000a31a
- (void)dealloc;	// IMP=0x000000000000a2e4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000a1f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

