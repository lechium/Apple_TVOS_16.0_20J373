//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol WebCaretChangeListener, WebDeviceOrientationProvider, WebFormDelegate, WebGeolocationProvider, WebNotificationProvider;

__attribute__((visibility("hidden")))
@interface WebViewPrivate : NSObject
{
    struct Page *page;	// 8 = 0x8
    struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> group;	// 16 = 0x10
    id UIDelegate;	// 24 = 0x18
    struct RetainPtr<id> UIDelegateForwarder;	// 32 = 0x20
    id resourceProgressDelegate;	// 40 = 0x28
    id downloadDelegate;	// 48 = 0x30
    id policyDelegate;	// 56 = 0x38
    struct RetainPtr<id> policyDelegateForwarder;	// 64 = 0x40
    id frameLoadDelegate;	// 72 = 0x48
    struct RetainPtr<id> frameLoadDelegateForwarder;	// 80 = 0x50
    id <WebFormDelegate> formDelegate;	// 88 = 0x58
    id editingDelegate;	// 96 = 0x60
    struct RetainPtr<id> editingDelegateForwarder;	// 104 = 0x68
    id scriptDebugDelegate;	// 112 = 0x70
    id historyDelegate;	// 120 = 0x78
    struct RetainPtr<id> resourceProgressDelegateForwarder;	// 128 = 0x80
    struct RetainPtr<id> formDelegateForwarder;	// 136 = 0x88
    struct RetainPtr<WebInspector> inspector;	// 144 = 0x90
    struct RetainPtr<WebNodeHighlight> currentNodeHighlight;	// 152 = 0x98
    struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> formValidationBubble;	// 160 = 0xa0
    _Bool shouldMaintainInactiveSelection;	// 168 = 0xa8
    _Bool allowsUndo;	// 169 = 0xa9
    float zoomMultiplier;	// 172 = 0xac
    _Bool zoomsTextOnly;	// 176 = 0xb0
    struct RetainPtr<NSString> applicationNameForUserAgent;	// 184 = 0xb8
    struct String userAgent;	// 192 = 0xc0
    _Bool userAgentOverridden;	// 200 = 0xc8
    struct RetainPtr<WebPreferences> preferences;	// 208 = 0xd0
    NSURL *userStyleSheetLocation;	// 216 = 0xd8
    struct RetainPtr<WAKWindow> hostWindow;	// 224 = 0xe0
    int programmaticFocusCount;	// 232 = 0xe8
    struct WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;	// 240 = 0xf0
    struct WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;	// 416 = 0x1a0
    struct WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;	// 656 = 0x290
    struct WebHistoryDelegateImplementationCache historyDelegateImplementations;	// 688 = 0x2b0
    _Bool closed;	// 736 = 0x2e0
    _Bool closing;	// 737 = 0x2e1
    unsigned long long deviceOrientation;	// 744 = 0x2e8
    _Bool shouldCloseWithWindow;	// 752 = 0x2f0
    _Bool mainFrameDocumentReady;	// 753 = 0x2f1
    _Bool drawsBackground;	// 754 = 0x2f2
    _Bool tabKeyCyclesThroughElementsChanged;	// 755 = 0x2f3
    _Bool becomingFirstResponder;	// 756 = 0x2f4
    _Bool becomingFirstResponderFromOutside;	// 757 = 0x2f5
    _Bool usesPageCache;	// 758 = 0x2f6
    struct RetainPtr<CGColor *> backgroundColor;	// 760 = 0x2f8
    struct RetainPtr<NSString> mediaStyle;	// 768 = 0x300
    _Bool hasSpellCheckerDocumentTag;	// 776 = 0x308
    long long spellCheckerDocumentTag;	// 784 = 0x310
    _Bool isStopping;	// 792 = 0x318
    id UIKitDelegate;	// 800 = 0x320
    struct RetainPtr<id> UIKitDelegateForwarder;	// 808 = 0x328
    id WebMailDelegate;	// 816 = 0x330
    _Bool allowsMessaging;	// 824 = 0x338
    struct RetainPtr<NSMutableSet> _caretChangeListeners;	// 832 = 0x340
    id <WebCaretChangeListener> _caretChangeListener;	// 840 = 0x348
    struct CGSize fixedLayoutSize;	// 848 = 0x350
    _Bool mainViewIsScrollingOrZooming;	// 864 = 0x360
    int didDrawTiles;	// 868 = 0x364
    struct Lock pendingFixedPositionLayoutRectMutex;	// 872 = 0x368
    struct CGRect pendingFixedPositionLayoutRect;	// 880 = 0x370
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> identifierMap;	// 912 = 0x390
    _Bool _keyboardUIModeAccessed;	// 920 = 0x398
    int _keyboardUIMode;	// 924 = 0x39c
    _Bool shouldUpdateWhileOffscreen;	// 928 = 0x3a0
    _Bool needsOneShotDrawingSynchronization;	// 929 = 0x3a1
    _Bool postsAcceleratedCompositingNotifications;	// 930 = 0x3a2
    struct RefPtr<LayerFlushController, WTF::RawPtrTraits<LayerFlushController>, WTF::DefaultRefDerefTraits<LayerFlushController>> layerFlushController;	// 936 = 0x3a8
    struct CGSize lastLayoutSize;	// 944 = 0x3b0
    struct RetainPtr<WebVideoFullscreenController> fullscreenController;	// 960 = 0x3c0
    struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> fullscreenControllersExiting;	// 968 = 0x3c8
    struct RetainPtr<WebIndicateLayer> indicateLayer;	// 984 = 0x3d8
    id <WebGeolocationProvider> _geolocationProvider;	// 992 = 0x3e0
    id <WebDeviceOrientationProvider> m_deviceOrientationProvider;	// 1000 = 0x3e8
    id <WebNotificationProvider> _notificationProvider;	// 1008 = 0x3f0
    _Bool interactiveFormValidationEnabled;	// 1016 = 0x3f8
    int validationMessageTimerMagnification;	// 1020 = 0x3fc
    float customDeviceScaleFactor;	// 1024 = 0x400
    struct RetainPtr<WebFixedPositionContent> _fixedPositionContent;	// 1032 = 0x408
    struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> m_alternativeTextUIController;	// 1040 = 0x410
    struct RetainPtr<NSData> sourceApplicationAuditData;	// 1048 = 0x418
    _Bool _didPerformFirstNavigation;	// 1056 = 0x420
}

+ (void)initialize;	// IMP=0x00600000001281e0
- (id).cxx_construct;	// IMP=0x0000000000128740
- (void).cxx_destruct;	// IMP=0x00000000001282f0
- (void)dealloc;	// IMP=0x00000000001282c0
- (id)init;	// IMP=0x00000000001281f0

@end
