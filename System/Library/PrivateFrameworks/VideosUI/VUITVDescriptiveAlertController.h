//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, VUITVDescriptiveAlertView;

__attribute__((visibility("hidden")))
@interface VUITVDescriptiveAlertController : UIViewController
{
    NSString *_titleString;	// 8 = 0x8
    NSString *_descriptionString;	// 16 = 0x10
    VUITVDescriptiveAlertView *_alertView;	// 24 = 0x18
    CDUnknownBlockType _dismissHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010dcb0
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) VUITVDescriptiveAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (id)preferredFocusEnvironments;	// IMP=0x000000000010db3b
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010daa4
- (void)viewDidLoad;	// IMP=0x000000000010d75b
- (id)initWithTitle:(id)arg1 description:(id)arg2;	// IMP=0x000000000010d6a4

@end

