//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVSUIGroupRecommendationsPickerDataSource, UINavigationController;

@interface TVUPSGroupRecommendationsPickerViewController : UIViewController
{
    _Bool _isUpdating;	// 8 = 0x8
    UINavigationController *_presentationController;	// 16 = 0x10
    TVSUIGroupRecommendationsPickerDataSource *_dataSource;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000003e80
+ (id)_exportedInterface;	// IMP=0x0010000000003d00
- (void).cxx_destruct;	// IMP=0x0020000000004d10
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) TVSUIGroupRecommendationsPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UINavigationController *presentationController; // @synthesize presentationController=_presentationController;
- (id)userPickerViewController:(id)arg1 descriptionForUserWithIdentifier:(id)arg2;	// IMP=0x0010000000004870
- (void)userPickerViewControllerHandleAddNewUserAction:(id)arg1;	// IMP=0x00100000000047a0
- (void)userPickerViewController:(id)arg1 didFinishWithSelectedUserIdentifiers:(id)arg2;	// IMP=0x0010000000004270
- (void)userPickerViewController:(id)arg1 didDeselectUserWithIdentifier:(id)arg2;	// IMP=0x00100000000041e0
- (_Bool)userPickerViewController:(id)arg1 shouldDeselectUserWithIdentifier:(id)arg2;	// IMP=0x00100000000040d0
- (void)userPickerViewController:(id)arg1 didSelectUserWithIdentifier:(id)arg2;	// IMP=0x0010000000004040
- (_Bool)userPickerViewController:(id)arg1 shouldSelectUserWithIdentifier:(id)arg2;	// IMP=0x0010000000003f70
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003be0
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0010000000003610
- (void)_showConsentDialogWithUserIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000003070
- (_Bool)_userNeedsToConsentWithIdentifier:(id)arg1;	// IMP=0x0010000000002f90
- (void)_dimiss;	// IMP=0x0010000000002f30
- (void)_menuPressed:(id)arg1;	// IMP=0x0010000000002e30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

