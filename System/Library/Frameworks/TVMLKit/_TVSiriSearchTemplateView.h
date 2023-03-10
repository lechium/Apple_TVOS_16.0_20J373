//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIFocusGuide, UIImageView, UISearchBar, UITapGestureRecognizer, _TVSearchBarWrapper;
@protocol UIFocusEnvironment, _TVSiriSearchTemplateViewDelegate;

__attribute__((visibility("hidden")))
@interface _TVSiriSearchTemplateView : UIView
{
    UIView *_keyboard;	// 8 = 0x8
    UISearchBar *_searchBar;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    _Bool _isTouchEnabled;	// 32 = 0x20
    _Bool _focusHidden;	// 33 = 0x21
    _Bool _partialViewEnabled;	// 34 = 0x22
    UIView *_fieldAndKeyboardContainer;	// 40 = 0x28
    _TVSearchBarWrapper *_searchBarWrapper;	// 48 = 0x30
    NSArray *_keyboardConstraints;	// 56 = 0x38
    id <UIFocusEnvironment> _preferredFocusEnvironment;	// 64 = 0x40
    UIView *_templateContainerView;	// 72 = 0x48
    UIFocusGuide *_keyboardProxy;	// 80 = 0x50
    NSArray *_keyboardProxyConstraints;	// 88 = 0x58
    UITapGestureRecognizer *_menuRecognizer;	// 96 = 0x60
    double _fieldOriginY;	// 104 = 0x68
    int _keyboardState;	// 112 = 0x70
    int _targetKeyboardState;	// 116 = 0x74
    struct {
        unsigned int hasWillAddKeyboard:1;
        unsigned int hasDidAddKeyboard:1;
        unsigned int hasWillRemoveKeyboard:1;
        unsigned int hasDidRemoveKeyboard:1;
        unsigned int hasDidOffsetOrigin:1;
    } _delegateFlags;	// 120 = 0x78
    _Bool _spinning;	// 121 = 0x79
    id <_TVSiriSearchTemplateViewDelegate> _delegate;	// 128 = 0x80
    UIView *_bannerView;	// 136 = 0x88
    UIImageView *_bgImageView;	// 144 = 0x90
    struct UIEdgeInsets _collectionMargin;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000dd32c
@property(nonatomic, getter=isSpinning) _Bool spinning; // @synthesize spinning=_spinning;
@property(readonly, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic, getter=isPartialViewEnabled) _Bool partialViewEnabled; // @synthesize partialViewEnabled=_partialViewEnabled;
@property(nonatomic, getter=isFocusHidden) _Bool focusHidden; // @synthesize focusHidden=_focusHidden;
@property(nonatomic) struct UIEdgeInsets collectionMargin; // @synthesize collectionMargin=_collectionMargin;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <_TVSiriSearchTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isTouchEnabled; // @synthesize isTouchEnabled=_isTouchEnabled;
@property(readonly, retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (_Bool)_isSearchFieldVisible;	// IMP=0x00000000000dd246
- (void)_transitionKeyboardOut;	// IMP=0x00000000000dce45
- (void)_transitionKeyboardInAnimated:(_Bool)arg1;	// IMP=0x00000000000dc98a
- (void)_addKeyboard;	// IMP=0x00000000000dc850
- (void)_pushKeyboardTowardsStableState:(unsigned long long)arg1;	// IMP=0x00000000000dc634
- (void)_adjustKeyboardContainerPositionForContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000000dc4eb
- (void)_handleMenuAction:(id)arg1;	// IMP=0x00000000000dc4b3
- (void)layoutSubviews;	// IMP=0x00000000000dbded
- (void)updateConstraints;	// IMP=0x00000000000db69c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000db46c
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000000db391
- (id)preferredFocusEnvironments;	// IMP=0x00000000000db2ac
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000db237
- (void)stopEditing;	// IMP=0x00000000000db1fe
- (void)adjustScrollForContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000000db1ec
- (id)initWithCollectionView:(id)arg1 searchBar:(id)arg2 keyboard:(id)arg3 touchEnabled:(_Bool)arg4;	// IMP=0x00000000000da8b4

@end

