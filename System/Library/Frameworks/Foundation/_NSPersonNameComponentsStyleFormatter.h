//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSPersonNameComponentsFormatter, NSSet;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsStyleFormatter : NSObject
{
    NSSet *_abbreviatedKeys;	// 8 = 0x8
    _NSPersonNameComponentsStyleFormatter *_fallbackStyleFormatter;	// 16 = 0x10
    NSSet *_keysOfInterest;	// 24 = 0x18
    _Bool _shouldFallBack;	// 32 = 0x20
    _Bool _isEnabled;	// 33 = 0x21
    long long _ordering;	// 40 = 0x28
    NSLocale *_locale;	// 48 = 0x30
    NSArray *_orderedTemplate;	// 56 = 0x38
    NSArray *_fallbackDescriptor;	// 64 = 0x40
    NSPersonNameComponentsFormatter *_masterFormatter;	// 72 = 0x48
}

@property(retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter; // @synthesize fallbackStyleFormatter=_fallbackStyleFormatter;
@property(readonly, copy) NSPersonNameComponentsFormatter *masterFormatter; // @synthesize masterFormatter=_masterFormatter;
- (void)dealloc;	// IMP=0x00000000006531fc
@property(readonly, copy) NSArray *fallbackDescriptor;
- (void)_releaseIvars;	// IMP=0x0000000000653072
- (id)annotatedStringFromPersonNameComponents:(id)arg1;	// IMP=0x0000000000652ef3
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;	// IMP=0x0000000000652a4a
- (id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(_Bool)arg3;	// IMP=0x0000000000652972
- (id)_orderedNonEmptyKeysFromComponents:(id)arg1;	// IMP=0x000000000065282e
- (id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2;	// IMP=0x000000000065267f
@property(readonly) NSArray *orderedTemplate;
@property long long ordering;
- (_Bool)fullComponentsAreValid:(id)arg1;	// IMP=0x00000000006525fe
@property(readonly) NSArray *orderedKeysOfInterest;
@property(readonly) _Bool isEnabled;
@property(readonly) _Bool shouldIgnoreComponentsContainingSpecialCharacters;
@property(readonly) _Bool shouldFallBack;
@property(readonly) NSSet *keysOfInterest;
@property(readonly) NSSet *abbreviatedKeys;
- (id)initWithMasterFormatter:(id)arg1;	// IMP=0x00000000006522bc

@end

