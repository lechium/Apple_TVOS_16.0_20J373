//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TVSettingsNumberingSystem;

@interface TVSettingsNumberingSystemsFacade : NSObject
{
    TVSettingsNumberingSystem *_currentNumberingSystem;	// 8 = 0x8
    NSArray *_availableNumberingSystems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c123e
@property(readonly, nonatomic) NSArray *availableNumberingSystems; // @synthesize availableNumberingSystems=_availableNumberingSystems;
@property(retain, nonatomic) TVSettingsNumberingSystem *currentNumberingSystem; // @synthesize currentNumberingSystem=_currentNumberingSystem;
- (void)_reloadNumberingSystems;	// IMP=0x00100000000c0e20
- (void)_currentLocaleDidChange;	// IMP=0x00100000000c0d09
- (void)dealloc;	// IMP=0x00100000000c0b92
- (id)init;	// IMP=0x00100000000c0a84

@end

