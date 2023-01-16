//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary
{
    void *_result;	// 8 = 0x8
    NSMutableDictionary *_cache;	// 16 = 0x10
    NSMutableSet *_nilValues;	// 24 = 0x18
    _Bool _cacheComplete;	// 32 = 0x20
}

+ (void)initializeLookupTable;	// IMP=0x00600000000f22c0
+ (void)initialize;	// IMP=0x00600000000f22b0
- (id)_isInScrollBar;	// IMP=0x00000000000f31f0
- (id)_isContentEditable;	// IMP=0x00000000000f31b0
- (id)_isLiveLink;	// IMP=0x00000000000f3160
- (id)_textContent;	// IMP=0x00000000000f30c0
- (id)_titleDisplayString;	// IMP=0x00000000000f3020
- (id)_targetWebFrame;	// IMP=0x00000000000f2fd0
- (id)_absoluteLinkURL;	// IMP=0x00000000000f2f40
- (id)_title;	// IMP=0x00000000000f2ea0
- (id)_isSelected;	// IMP=0x00000000000f2e60
- (id)_absoluteMediaURL;	// IMP=0x00000000000f2dd0
- (id)_absoluteImageURL;	// IMP=0x00000000000f2d40
- (id)_spellingToolTip;	// IMP=0x00000000000f2ca0
- (id)_altDisplayString;	// IMP=0x00000000000f2c00
- (id)_webFrame;	// IMP=0x00000000000f2bc0
- (id)_domNode;	// IMP=0x00000000000f2ba0
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000f2990
- (id)keyEnumerator;	// IMP=0x00000000000f2940
- (unsigned long long)count;	// IMP=0x00000000000f28f0
- (void)_fillCache;	// IMP=0x00000000000f2880
- (void)dealloc;	// IMP=0x00000000000f27e0
- (id)initWithHitTestResult:(const void *)arg1;	// IMP=0x00000000000f2740

@end

