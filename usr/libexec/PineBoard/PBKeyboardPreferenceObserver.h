//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol PBKeyboardPreferenceObserverDelegate;

@interface PBKeyboardPreferenceObserver : NSObject
{
    int _touchPadAvailabilityNotificationToken;	// 8 = 0x8
    id <PBKeyboardPreferenceObserverDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _keyboardStyleProvider;	// 24 = 0x18
    NSUserDefaults *_uikitDefaults;	// 32 = 0x20
    long long _resolvedKeyboardStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000107c6c
@property(readonly, nonatomic) int touchPadAvailabilityNotificationToken; // @synthesize touchPadAvailabilityNotificationToken=_touchPadAvailabilityNotificationToken;
@property(readonly, nonatomic) long long resolvedKeyboardStyle; // @synthesize resolvedKeyboardStyle=_resolvedKeyboardStyle;
@property(readonly, nonatomic) NSUserDefaults *uikitDefaults; // @synthesize uikitDefaults=_uikitDefaults;
@property(readonly, nonatomic) CDUnknownBlockType keyboardStyleProvider; // @synthesize keyboardStyleProvider=_keyboardStyleProvider;
@property(nonatomic) __weak id <PBKeyboardPreferenceObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleTouchPadAvailabilityUpdate;	// IMP=0x0010000000107b56
- (void)_handlePreferredKeyboardUpdate;	// IMP=0x00100000001079d0
- (long long)_resolvedKeyboardStyle;	// IMP=0x00100000001079c3
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000107921
- (void)dealloc;	// IMP=0x00100000001078c1
- (id)init;	// IMP=0x001000000010789d
- (id)initWithTouchPadAvailabilityNotificationName:(id)arg1 keyboardStyleProvider:(CDUnknownBlockType)arg2;	// IMP=0x0010000000107544

@end
