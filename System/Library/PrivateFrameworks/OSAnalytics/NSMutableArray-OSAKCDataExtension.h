//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (OSAKCDataExtension)
- (id)parent;	// IMP=0x0090000000002848
- (id)top;	// IMP=0x0090000000002836
- (id)pop;	// IMP=0x00900000000027ee
- (void)push:(id)arg1;	// IMP=0x00900000000027dc
- (void)addPart:(id)arg1;	// IMP=0x009000000001706f
- (id)section_pop;	// IMP=0x0090000000021e4c
- (void)section_push:(id)arg1;	// IMP=0x0090000000021e3a
- (void)sortByAddressAndSetInferredSizes;	// IMP=0x0090000000025e40
- (void)addImageLegacy:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(const char *)arg4 path:(const char *)arg5 arch:(const char *)arg6;	// IMP=0x0090000000025c3e
- (void)addImage:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x0090000000025bd1
@end

