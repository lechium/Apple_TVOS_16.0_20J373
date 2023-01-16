//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _PFEvanescentData : NSData
{
    unsigned long long _length;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    int _openfd;	// 24 = 0x18
    const void *_activeMap;	// 32 = 0x20
    int _mapRefCount;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000022d5b0
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000022d67a
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000022d618
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000022d601
- (void)getBytes:(void *)arg1;	// IMP=0x000000000022d5c1
- (Class)classForCoder;	// IMP=0x000000000022d59f
- (const void *)bytes;	// IMP=0x000000000022d562
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022d4e3
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022d47e
- (unsigned long long)hash;	// IMP=0x000000000022d464
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022d3e3
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x000000000022d3d1
- (void)invalidate;	// IMP=0x000000000022d3c7
- (unsigned long long)length;	// IMP=0x000000000022d0e7
- (id)description;	// IMP=0x000000000022d065
- (id)initWithPath:(id)arg1;	// IMP=0x000000000022d02b
- (void)dealloc;	// IMP=0x000000000022cf7f
- (id)initWithURL:(id)arg1;	// IMP=0x000000000022ce27

@end
