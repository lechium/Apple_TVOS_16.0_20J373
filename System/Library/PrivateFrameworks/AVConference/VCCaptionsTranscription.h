//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscription : NSObject
{
    NSMutableArray *_segments;	// 8 = 0x8
    NSMutableString *_formattedText;	// 16 = 0x10
    unsigned int _utteranceNumber;	// 24 = 0x18
    unsigned int _updateNumber;	// 28 = 0x1c
    _Bool _isLocal;	// 32 = 0x20
    _Bool _isFinal;	// 33 = 0x21
    long long _streamToken;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000016093f
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000160db5
- (unsigned long long)hash;	// IMP=0x0000000000160d6d
- (id)description;	// IMP=0x0000000000160d00
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001609dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000160947
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001607a3
- (void)addSegment:(id)arg1;	// IMP=0x0000000000160770
@property(readonly, nonatomic) NSString *formattedText;
- (void)dealloc;	// IMP=0x00000000001606bf
- (id)initWithSFTranscription:(id)arg1 utteranceNumber:(unsigned int)arg2 updateNumber:(unsigned int)arg3 isLocal:(_Bool)arg4 isFinal:(_Bool)arg5 streamToken:(long long)arg6;	// IMP=0x000000000016046b
- (id)initWithUtteranceNumber:(unsigned int)arg1 updateNumber:(unsigned int)arg2 isLocal:(_Bool)arg3 isFinal:(_Bool)arg4 streamToken:(long long)arg5;	// IMP=0x00000000001603c8

@end

