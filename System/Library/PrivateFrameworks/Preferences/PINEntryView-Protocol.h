//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UITextFieldDelegate-Protocol.h>

@class NSString, UIFont;
@protocol PSPINEntryViewDelegate;

@protocol PINEntryView <UITextFieldDelegate>
- (void)setShowsOptionsButton:(_Bool)arg1;
- (void)setBlocked:(_Bool)arg1;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(long long)arg1;
- (void)setDelegate:(id <PSPINEntryViewDelegate>)arg1;
- (_Bool)becomeFirstResponder;
- (void)hidePasscodeField:(_Bool)arg1;
- (void)appendString:(NSString *)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(NSString *)arg1;
- (NSString *)stringValue;
- (double)getCurrentTitleFontSize;
- (void)setTitle:(NSString *)arg1 font:(UIFont *)arg2;
- (void)hideError;
- (void)setPINPolicyString:(NSString *)arg1 visible:(_Bool)arg2;
- (void)showError:(NSString *)arg1 animate:(_Bool)arg2;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
@end

