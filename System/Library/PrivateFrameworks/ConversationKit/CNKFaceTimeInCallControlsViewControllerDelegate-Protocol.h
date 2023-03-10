//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNKFaceTimeInCallControlsViewController, TURoute, UIImage, UIMenu, UIView;

@protocol CNKFaceTimeInCallControlsViewControllerDelegate
- (UIImage *)audioRouteGlyphFor:(TURoute *)arg1 buttonStyle:(long long)arg2;
- (UIMenu *)audioRouteMenu;
- (void)resetEffectsState;
- (void)didCreateCollectionViewForInCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1;
- (void)inCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1 didTap:(long long)arg2 from:(UIView *)arg3;
- (_Bool)isCaptioningEnabled:(CNKFaceTimeInCallControlsViewController *)arg1;
@property(nonatomic, readonly) _Bool isPresentingEffectsBrowser;

@optional
- (void)inCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1 didAdd:(CNContact *)arg2;
@end

