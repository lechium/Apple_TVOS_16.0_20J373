//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaOffer : NSObject
{
    _Bool _hasAudio;	// 8 = 0x8
    _Bool _hasVideo;	// 9 = 0x9
    NSURL *_previewURL;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

+ (id)typeForOffer:(id)arg1;	// IMP=0x0060000000031247
+ (id)previewURLForOffer:(id)arg1;	// IMP=0x0060000000030e7a
+ (_Bool)hasVideoForOffer:(id)arg1;	// IMP=0x0060000000030e66
+ (_Bool)hasAudioForOffer:(id)arg1;	// IMP=0x0060000000030beb
- (void).cxx_destruct;	// IMP=0x00000000000312dc
@property(readonly, nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(readonly, nonatomic) _Bool hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000030adc

@end

