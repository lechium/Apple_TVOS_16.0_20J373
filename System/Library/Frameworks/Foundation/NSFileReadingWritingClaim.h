//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileReadingWritingClaim
{
    NSURL *_readingURL;	// 208 = 0xd0
    _Bool _readingURLDidChange;	// 216 = 0xd8
    unsigned long long _readingOptions;	// 224 = 0xe0
    NSURL *_writingURL;	// 232 = 0xe8
    _Bool _writingURLDidChange;	// 240 = 0xf0
    unsigned long long _writingOptions;	// 248 = 0xf8
    NSFileAccessNode *_readingLocation;	// 256 = 0x100
    NSFileAccessNode *_writingLocation;	// 264 = 0x108
    NSFileAccessNode *_rootNode;	// 272 = 0x110
    long long _readingLinkResolutionCount;	// 280 = 0x118
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000615a17
- (void)protectFilesAgainstEviction;	// IMP=0x00000000006176e9
- (_Bool)shouldCancelInsteadOfWaiting;	// IMP=0x00000000006176d3
- (id)allURLs;	// IMP=0x000000000061766a
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x0000000000617602
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x000000000061756c
- (void)devalueSelf;	// IMP=0x0000000000617408
- (void)invokeClaimer;	// IMP=0x0000000000617074
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x0000000000616bc7
- (void)granted;	// IMP=0x0000000000616348
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000006162b5
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000061625a
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x0000000000615f66
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000615a1f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000615856
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006156dc
- (void)dealloc;	// IMP=0x0000000000615661
- (id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned long long)arg3 writingURL:(id)arg4 options:(unsigned long long)arg5 claimer:(CDUnknownBlockType)arg6;	// IMP=0x00000000006155ae

@end

