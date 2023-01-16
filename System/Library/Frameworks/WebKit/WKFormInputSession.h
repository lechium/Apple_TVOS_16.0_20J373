//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;
@protocol NSSecureCoding, _WKFocusedElementInfo;

__attribute__((visibility("hidden")))
@interface WKFormInputSession : NSObject
{
    struct WeakObjCPtr<WKContentView> _contentView;	// 8 = 0x8
    struct RetainPtr<WKFocusedElementInfo> _focusedElementInfo;	// 16 = 0x10
    struct RetainPtr<UIView> _customInputView;	// 24 = 0x18
    struct RetainPtr<UIView> _customInputAccessoryView;	// 32 = 0x20
    struct RetainPtr<NSArray<UITextSuggestion *>> _suggestions;	// 40 = 0x28
    _Bool _accessoryViewShouldNotShow;	// 48 = 0x30
    _Bool _forceSecureTextEntry;	// 49 = 0x31
    _Bool _requiresStrongPasswordAssistance;	// 50 = 0x32
}

- (id).cxx_construct;	// IMP=0x0000000000774b96
- (void).cxx_destruct;	// IMP=0x0000000000774b23
- (void)reloadFocusedElementContextView;	// IMP=0x0000000000774b05
- (void)invalidate;	// IMP=0x0000000000774abe
@property(readonly, nonatomic) _Bool requiresStrongPasswordAssistance;
@property(copy, nonatomic) NSArray *suggestions;
- (void)endEditing;	// IMP=0x00000000007749f7
@property(retain, nonatomic) UIView *customInputAccessoryView;
@property(retain, nonatomic) UIView *customInputView;
@property(nonatomic) _Bool forceSecureTextEntry;
@property(nonatomic) _Bool accessoryViewShouldNotShow;
@property(copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic) id <_WKFocusedElementInfo> focusedElementInfo;
- (id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 requiresStrongPasswordAssistance:(_Bool)arg3;	// IMP=0x000000000077470e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

