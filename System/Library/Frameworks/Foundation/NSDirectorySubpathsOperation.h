//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSDirectorySubpathsOperation
{
    NSMutableArray *_subpaths;	// 72 = 0x48
}

+ (id)directorySubpathsOperationAtPath:(id)arg1;	// IMP=0x006000000049927f
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;	// IMP=0x0060000000499265
- (void)dealloc;	// IMP=0x00000000004993dd
- (id)subpaths;	// IMP=0x000000000049938c
- (void)handlePathname:(id)arg1;	// IMP=0x00000000004992b5

@end

