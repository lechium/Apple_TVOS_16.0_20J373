//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol APSTopicSaltStore;

@interface APSTopicHasher : NSObject
{
    id <APSTopicSaltStore> _topicSaltStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009ed75
@property(retain, nonatomic) id <APSTopicSaltStore> topicSaltStore; // @synthesize topicSaltStore=_topicSaltStore;
- (id)_identifierForTopic:(id)arg1 tokenName:(id)arg2;	// IMP=0x001000000009ecc2
- (id)topicsToSaltsWithProcessMode:(unsigned long long)arg1;	// IMP=0x001000000009ec63
- (id)topicHashForTopic:(id)arg1 tokenName:(id)arg2 processMode:(unsigned long long)arg3;	// IMP=0x001000000009eb4d
- (id)createTopicHashForTopic:(id)arg1 tokenName:(id)arg2 processMode:(unsigned long long)arg3 shouldSalt:(_Bool)arg4;	// IMP=0x001000000009e978
- (void)clearSaltForTopic:(id)arg1 tokenName:(id)arg2 processMode:(unsigned long long)arg3;	// IMP=0x001000000009e901
- (id)initWithTopicSaltStore:(id)arg1;	// IMP=0x001000000009e896

@end

