//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UINavigationController, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIDialogForAddingKeyboard : NSObject
{
    UIWindow *_presenterWindow;	// 8 = 0x8
    UINavigationController *_privacySheetController;	// 16 = 0x10
}

+ (void)presentDialogForAddingKeyboard;	// IMP=0x0060000000871424
- (void).cxx_destruct;	// IMP=0x0000000000871469
- (void)presentDialogForAddingKeyboard;	// IMP=0x0000000000871324
- (void)dismiss;	// IMP=0x00000000008711fa
- (void)presentPrivacySheet;	// IMP=0x0000000000870df6

@end
