//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarItemAppearanceStorage : NSObject
{
    NSMutableDictionary *textAttributesForState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000134fbf
- (void)enumerateTextAttributesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000134edb
- (id)textAttributeForKey:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x0000000000134db9
- (void)setTextAttribute:(id)arg1 forKey:(id)arg2 state:(unsigned long long)arg3;	// IMP=0x0000000000134c2f
- (id)textAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000134baf
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000134a29

@end

