//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSVLRUDictionaryNode : NSObject
{
    id _key;	// 8 = 0x8
    id _object;	// 16 = 0x10
    MSVLRUDictionaryNode *_next;	// 24 = 0x18
    MSVLRUDictionaryNode *_prev;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003c2db
@property(nonatomic) __weak MSVLRUDictionaryNode *prev; // @synthesize prev=_prev;
@property(nonatomic) __weak MSVLRUDictionaryNode *next; // @synthesize next=_next;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c235
- (id)initWithKey:(id)arg1 object:(id)arg2;	// IMP=0x000000000003c19c

@end

