//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsNumberingSystemsFacade;

@interface TVSettingsNumbersViewController : TSKViewController
{
    TVSettingsNumberingSystemsFacade *_numberingSystemsFacade;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000136fd
@property(retain, nonatomic) TVSettingsNumberingSystemsFacade *numberingSystemsFacade; // @synthesize numberingSystemsFacade=_numberingSystemsFacade;
- (void)_setNumberingSystem:(id)arg1;	// IMP=0x00100000000134ee
- (id)loadSettingGroups;	// IMP=0x0010000000013217
- (id)initWithNumberingSystemsFacade:(id)arg1;	// IMP=0x00100000000130ed

@end

