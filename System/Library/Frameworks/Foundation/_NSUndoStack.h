//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _NSUndoObject;

__attribute__((visibility("hidden")))
@interface _NSUndoStack : NSObject
{
    unsigned long long _max;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    unsigned long long _nestingLevel;	// 24 = 0x18
    _NSUndoObject *_head;	// 32 = 0x20
}

- (id)description;	// IMP=0x000000000058c147
- (void)removeObject:(id)arg1;	// IMP=0x000000000058c0ed
- (void)removeAllObjectsWithTarget:(id)arg1;	// IMP=0x000000000058bf02
- (void)removeAllObjects;	// IMP=0x000000000058bec8
- (unsigned long long)nestingLevel;	// IMP=0x000000000058bebe
- (_Bool)popAndInvoke;	// IMP=0x000000000058bd80
- (void)setDiscardable:(_Bool)arg1;	// IMP=0x000000000058bccf
- (_Bool)isDiscardable;	// IMP=0x000000000058bca4
- (void)markEnd;	// IMP=0x000000000058bc46
- (void)markBegin;	// IMP=0x000000000058bbe8
- (id)topUndoObject;	// IMP=0x000000000058bbde
- (id)groupIdentifier;	// IMP=0x000000000058bbb3
- (void)setGroupIdentifier:(id)arg1;	// IMP=0x000000000058bb01
- (id)_beginMark;	// IMP=0x000000000058ba85
- (id)popUndoObject;	// IMP=0x000000000058b974
- (void)push:(id)arg1;	// IMP=0x000000000058b844
- (void)setMax:(unsigned long long)arg1;	// IMP=0x000000000058b7fd
- (unsigned long long)count;	// IMP=0x000000000058b7f3
- (unsigned long long)max;	// IMP=0x000000000058b7e9
- (void)dealloc;	// IMP=0x000000000058b768
- (id)init;	// IMP=0x000000000058b707
- (void)_removeBottom;	// IMP=0x000000000058b61f

@end

