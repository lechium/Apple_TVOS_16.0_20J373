//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (CRTT)
- (void)cr_mergeAttributesInRange:(struct _NSRange)arg1 withStorage:(id)arg2 fromRange:(struct _NSRange)arg3;	// IMP=0x006000000001fd8c
- (void)cr_removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x006000000001fd7a
- (id)cr_emptyCopy;	// IMP=0x006000000001fd61
- (id)cr_storageFromRange:(struct _NSRange)arg1;	// IMP=0x006000000001fd05
- (void)cr_appendStorage:(id)arg1 fromRange:(struct _NSRange)arg2;	// IMP=0x006000000001fc80
- (void)cr_replaceStorageInRange:(struct _NSRange)arg1 withStorage:(id)arg2 fromRange:(struct _NSRange)arg3;	// IMP=0x006000000001fb0c
- (void)cr_insertStorage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x006000000001faf9
- (void)cr_appendString:(id)arg1;	// IMP=0x006000000001fa6a
@end

