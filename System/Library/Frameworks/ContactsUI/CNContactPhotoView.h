//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CNAvatarView, CNMutableContact, NSArray, NSString, PRLikeness, UIButton, UIImageView, UILongPressGestureRecognizer;
@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl
{
    _Bool _editing;	// 8 = 0x8
    _Bool _modified;	// 9 = 0x9
    _Bool _isAnimatingBounce;	// 10 = 0xa
    NSArray *_contacts;	// 16 = 0x10
    CNAvatarView *_avatarView;	// 24 = 0x18
    id <CNPresenterDelegate> _delegate;	// 32 = 0x20
    id <CNContactPhotoViewDelegate> _photoViewDelegate;	// 40 = 0x28
    CNMutableContact *_pendingEditContact;	// 48 = 0x30
    PRLikeness *_originalLikeness;	// 56 = 0x38
    PRLikeness *_currentLikeness;	// 64 = 0x40
    UIButton *_addPhotoButton;	// 72 = 0x48
    UIButton *_editPhotoButton;	// 80 = 0x50
    UIImageView *_attributionImageView;	// 88 = 0x58
    NSArray *_variableConstraints;	// 96 = 0x60
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 104 = 0x68
}

+ (id)supportedPasteboardTypes;	// IMP=0x0010000000024457
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0010000000023a30
- (void).cxx_destruct;	// IMP=0x0000000000026f33
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(nonatomic) _Bool isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
@property(retain, nonatomic) UIImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property(retain, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
@property(retain, nonatomic) UIButton *addPhotoButton; // @synthesize addPhotoButton=_addPhotoButton;
@property(retain, nonatomic) PRLikeness *currentLikeness; // @synthesize currentLikeness=_currentLikeness;
@property(retain, nonatomic) PRLikeness *originalLikeness; // @synthesize originalLikeness=_originalLikeness;
@property(retain, nonatomic) CNMutableContact *pendingEditContact; // @synthesize pendingEditContact=_pendingEditContact;
@property(nonatomic) __weak id <CNContactPhotoViewDelegate> photoViewDelegate; // @synthesize photoViewDelegate=_photoViewDelegate;
@property(nonatomic) __weak id <CNPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool modified; // @synthesize modified=_modified;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)avatarView:(id)arg1 willShowActions:(id)arg2;	// IMP=0x0000000000026cb4
- (id)presentingViewControllerForAvatarView:(id)arg1;	// IMP=0x0000000000026c11
- (void)_bounceSmallPhoto;	// IMP=0x00000000000268ed
- (void)_zoomContactPhoto;	// IMP=0x000000000002670a
- (id)previewPath;	// IMP=0x00000000000266bc
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;	// IMP=0x0000000000026505
- (id)_createImagePicker;	// IMP=0x0000000000026384
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000000002630f
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000000025f16
- (void)_presentPhotoEditingSheet;	// IMP=0x000000000002545f
- (_Bool)_isUsingCuratedPhoto;	// IMP=0x0000000000025394
- (id)_localizedStringForProfileAction:(id)arg1 type:(id)arg2;	// IMP=0x000000000002538e
- (void)updateAttributionBadge;	// IMP=0x0000000000024f10
- (void)updatePhoto;	// IMP=0x0000000000024bd0
- (void)resetPhoto;	// IMP=0x0000000000024b73
- (void)paste:(id)arg1;	// IMP=0x0000000000024837
- (void)copy:(id)arg1;	// IMP=0x000000000002470b
- (void)menuWillHide:(id)arg1;	// IMP=0x00000000000246d2
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000002461e
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000002453d
- (void)longPressGesture:(id)arg1;	// IMP=0x0000000000024379
- (void)avatarTapped:(id)arg1;	// IMP=0x00000000000242f5
- (void)disablePhotoTapGesture;	// IMP=0x00000000000242c8
- (void)setHighlightedFrame:(_Bool)arg1;	// IMP=0x000000000002409b
- (void)saveEdits;	// IMP=0x0000000000023d9f
- (id)currentImageDataAndCropRect:(struct CGRect *)arg1;	// IMP=0x0000000000023c99
- (id)currentImageData;	// IMP=0x0000000000023c85
- (void)updateConstraints;	// IMP=0x0000000000023a38
- (void)updateFontSizes;	// IMP=0x000000000002397d
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (id)contact;	// IMP=0x00000000000237e3
- (_Bool)isMeContact;	// IMP=0x00000000000237db
- (void)dealloc;	// IMP=0x00000000000236ce
- (id)initWithFrame:(struct CGRect)arg1 monogrammerStyle:(long long)arg2;	// IMP=0x0000000000022d43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
