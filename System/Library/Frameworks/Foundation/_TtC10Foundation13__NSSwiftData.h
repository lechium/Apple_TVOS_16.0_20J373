//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10Foundation13__NSSwiftData : NSData
{
    MISSING_TYPE *_backing;	// 8 = 0x8
    MISSING_TYPE *_range;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000329d10
- (id)initWithData:(id)arg1;	// IMP=0x0000000000329c20
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x0000000000329b30
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000329ae0
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000003299c0
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000329800
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x0000000000329670
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x0000000000329500
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2;	// IMP=0x0000000000329470
- (id)initWithBytes:(void *)arg1 length:(long long)arg2;	// IMP=0x0000000000329450
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000329390
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000329360
- (id)initWithBase64Encoding:(id)arg1;	// IMP=0x00000000003292a0
- (id)initWithContentsOfMappedFile:(id)arg1;	// IMP=0x00000000003291e0
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(long long)arg3 error:(id *)arg4;	// IMP=0x00000000003290d0
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000328f20
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000328de0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000328d80
- (id)init;	// IMP=0x0000000000328d20
- (_Bool)_providesConcreteBacking;	// IMP=0x0000000000328d10
- (_Bool)_isCompact;	// IMP=0x0000000000328d00
- (id)mutableCopyWithZone:(void *)arg1;	// IMP=0x0000000000328c60
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000328c40
@property(nonatomic, readonly) void *bytes;
@property(nonatomic, readonly) long long length;

@end
