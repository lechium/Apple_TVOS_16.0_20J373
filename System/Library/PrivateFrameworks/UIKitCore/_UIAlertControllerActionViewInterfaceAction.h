//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInterfaceAction.h"

@class NSString, UIAlertAction, _UIAlertControllerActionView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction
{
    UIAlertAction *_underlyingAlertAction;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

+ (id)actionWithAlertControllerActionView:(id)arg1;	// IMP=0x0010000000085655
- (void).cxx_destruct;	// IMP=0x0000000000085abd
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) UIAlertAction *underlyingAlertAction; // @synthesize underlyingAlertAction=_underlyingAlertAction;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;	// IMP=0x0000000000085a87
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;	// IMP=0x0000000000085a72
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;	// IMP=0x0000000000085a5e
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;	// IMP=0x0000000000085a58
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;	// IMP=0x0000000000085a44
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;	// IMP=0x0000000000085a2f
- (void)_action:(id)arg1 changedToTitle:(id)arg2;	// IMP=0x0000000000085a1a
- (long long)type;	// IMP=0x00000000000859c7
- (long long)_typeForDeterminingViewRepresentation;	// IMP=0x00000000000859bc
@property(readonly, nonatomic) _UIAlertControllerActionView *alertControllerActionView; // @dynamic alertControllerActionView;
- (id)leadingImage;	// IMP=0x000000000008595a
- (id)classificationTitle;	// IMP=0x000000000008590a
- (void)dealloc;	// IMP=0x00000000000858cc
- (void)invalidate;	// IMP=0x0000000000085834
- (void)_initializeStateFromUnderlyingAlertAction;	// IMP=0x00000000000856aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
