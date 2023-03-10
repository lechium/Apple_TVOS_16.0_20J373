//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, UIKBCacheToken, UIKBKeyView, UIKBKeyViewAnimator, UIKBRenderConfig, UIKBRenderFactory, UIKBRenderingContext, UIKBScreenTraits, UIKBSplitImageView, UIKBTree, UIKeyboardEmojiKeyDisplayController, UIView;
@protocol UIKBKeyplaneViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView
{
    UIKBTree *_keyplane;	// 8 = 0x8
    UIKBTree *_defaultKeyplane;	// 16 = 0x10
    UIKBCacheToken *_cacheToken;	// 24 = 0x18
    UIKBCacheToken *_defaultKeyplaneCacheToken;	// 32 = 0x20
    UIKBKeyViewAnimator *_keyViewAnimator;	// 40 = 0x28
    UIKeyboardEmojiKeyDisplayController *_emojiKeyManager;	// 48 = 0x30
    UIKBKeyView *_candidateGapView;	// 56 = 0x38
    NSMutableDictionary *_subviewIndex;	// 64 = 0x40
    NSMutableDictionary *_activeViewIndex;	// 72 = 0x48
    NSMutableDictionary *_renderedKeyViews;	// 80 = 0x50
    NSMutableDictionary *_delayedDeactivationKeys;	// 88 = 0x58
    _Bool _shouldDrawRect;	// 96 = 0x60
    UIKBRenderConfig *_renderConfig;	// 104 = 0x68
    UIKBRenderingContext *_renderingContext;	// 112 = 0x70
    UIKBRenderFactory *_factory;	// 120 = 0x78
    UIKBSplitImageView *_keyBorders;	// 128 = 0x80
    UIKBSplitImageView *_keyBackgrounds;	// 136 = 0x88
    UIKBSplitImageView *_keyCaps;	// 144 = 0x90
    UIView *_keyplaneMaskView;	// 152 = 0x98
    _Bool _suppressDrawing;	// 160 = 0xa0
    UIKBScreenTraits *_overrideScreenTraits;	// 168 = 0xa8
    id <UIKBKeyplaneViewDelegate> _delegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000008dde2a
@property(nonatomic) _Bool suppressDrawing; // @synthesize suppressDrawing=_suppressDrawing;
@property(nonatomic) __weak id <UIKBKeyplaneViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIKBScreenTraits *overrideScreenTraits; // @synthesize overrideScreenTraits=_overrideScreenTraits;
@property(retain, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager; // @synthesize emojiKeyManager=_emojiKeyManager;
@property(retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // @synthesize keyViewAnimator=_keyViewAnimator;
@property(retain, nonatomic) UIKBRenderFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) UIKBCacheToken *defaultKeyplaneCacheToken; // @synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken;
@property(retain, nonatomic) UIKBCacheToken *cacheToken; // @synthesize cacheToken=_cacheToken;
@property(retain, nonatomic) UIKBTree *defaultKeyplane; // @synthesize defaultKeyplane=_defaultKeyplane;
@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property(readonly, nonatomic) UIView *keyplaneMaskView; // @synthesize keyplaneMaskView=_keyplaneMaskView;
- (void)_updateKeyplaneMaskView;	// IMP=0x00000000008ddab8
- (void)purgeFactory;	// IMP=0x00000000008dda97
- (void)purgeLayerContents;	// IMP=0x00000000008dda3d
- (void)purgeSubviews;	// IMP=0x00000000008dd9d3
- (void)purgeKeyViews;	// IMP=0x00000000008dd30c
- (void)purgeActiveKeyViews;	// IMP=0x00000000008dd181
- (void)activateKeys;	// IMP=0x00000000008dcf6d
- (void)deactivateKeys;	// IMP=0x00000000008dca60
- (void)deactivateKey:(id)arg1 previousState:(int)arg2 keyView:(id)arg3;	// IMP=0x00000000008dc62d
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;	// IMP=0x00000000008dc5af
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000008dc4e0
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000008dc411
- (id)_existingVariantsKeyViewForKey:(id)arg1;	// IMP=0x00000000008dc326
- (void)orientKeyCapForKey:(id)arg1 orientation:(long long)arg2;	// IMP=0x00000000008dc0ac
- (void)hideKeyCaps:(_Bool)arg1 andControlKeysWithInteractionTypes:(id)arg2;	// IMP=0x00000000008dbe42
- (void)hideKeyCaps:(_Bool)arg1;	// IMP=0x00000000008dbcdd
- (void)dimKeys:(id)arg1;	// IMP=0x00000000008dba6e
- (void)deactivateAdaptiveKey:(id)arg1;	// IMP=0x00000000008db9f8
- (_Bool)shouldAnimateOutKeyView:(id)arg1;	// IMP=0x00000000008db917
- (_Bool)shouldAnimateInKeyView:(id)arg1;	// IMP=0x00000000008db8a1
- (id)viewForKey:(id)arg1 state:(int)arg2;	// IMP=0x00000000008db83a
- (id)viewForKey:(id)arg1;	// IMP=0x00000000008db74c
- (void)updateFrameForKey:(id)arg1;	// IMP=0x00000000008db4df
- (id)activeKeyViews;	// IMP=0x00000000008db4c2
- (int)stateForKey:(id)arg1;	// IMP=0x00000000008db4ad
- (struct CGRect)_safeFrameForKeyViewFrame:(struct CGRect)arg1 inContainer:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000008db021
- (void)setState:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000008d94e2
- (_Bool)_shouldAllowKey:(id)arg1;	// IMP=0x00000000008d9425
- (id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(_Bool *)arg3;	// IMP=0x00000000008d8ee7
- (unsigned long long)cornerMaskForKey:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x00000000008d89bb
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;	// IMP=0x00000000008d8838
- (id)cacheIdentifierForKey:(id)arg1;	// IMP=0x00000000008d86f1
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;	// IMP=0x00000000008d8668
- (void)addKeyToDelayedDeactivationSet:(id)arg1;	// IMP=0x00000000008d843a
- (void)cancelDelayedDeactivation;	// IMP=0x00000000008d841d
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000008d83d0
- (_Bool)_canDrawContent;	// IMP=0x00000000008d83bb
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;	// IMP=0x00000000008d83b3
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x00000000008d832c
- (void)drawContentsOfRenderers:(id)arg1;	// IMP=0x00000000008d7b66
@property(readonly, nonatomic) long long assetIdiom;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;	// IMP=0x00000000008d73cb
- (id)cacheKeysForRenderFlags:(id)arg1;	// IMP=0x00000000008d6ef8
- (_Bool)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1;	// IMP=0x00000000008d6e7e
@property(readonly, nonatomic) NSString *cacheKey;
- (void)layoutSubviews;	// IMP=0x00000000008d6cd1
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000008d6c06
- (void)_generateFactoryIfNeeded;	// IMP=0x00000000008d6acb
- (void)_generateRenderingContextIfNeeded;	// IMP=0x00000000008d69af
- (void)prepareForDisplay;	// IMP=0x00000000008d63a8
- (_Bool)isPasscodeStyle;	// IMP=0x00000000008d5e97
- (_Bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;	// IMP=0x00000000008d5e45
- (void)dealloc;	// IMP=0x00000000008d5dd0
- (void)removeFromSuperview;	// IMP=0x00000000008d5d4e
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2;	// IMP=0x00000000008d5bc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

