//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BetaAppFeedbackMemoryEntity;

@interface TestFlightUploadSubTask
{
    BetaAppFeedbackMemoryEntity *_entity;	// 8 = 0x8
}

+ (id)taskWithEntity:(id)arg1;	// IMP=0x00400000001103a3
- (void).cxx_destruct;	// IMP=0x0020000000110eb3
@property(retain, nonatomic) BetaAppFeedbackMemoryEntity *entity; // @synthesize entity=_entity;
- (_Bool)_useOverride:(id)arg1;	// IMP=0x0010000000110def
- (id)addAttemptCountToURL:(id)arg1;	// IMP=0x0010000000110b61
- (id)performRequestWith:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id *)arg4;	// IMP=0x001000000011040f
- (id)contentTypeHeaderValue;	// IMP=0x0010000000110402
- (id)acceptHeaderValue;	// IMP=0x00100000001103f5

@end

