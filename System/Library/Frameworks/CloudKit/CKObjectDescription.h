//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKOrderedDictionary, NSString;

@interface CKObjectDescription : NSObject
{
    _Bool _printAsDictionary;	// 8 = 0x8
    _Bool _redact;	// 9 = 0x9
    _Bool _avoidShortDescription;	// 10 = 0xa
    NSString *_descriptionPrefix;	// 16 = 0x10
    CKOrderedDictionary *_orderedDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000201346
@property(retain, nonatomic) CKOrderedDictionary *orderedDictionary; // @synthesize orderedDictionary=_orderedDictionary;
@property(retain, nonatomic) NSString *descriptionPrefix; // @synthesize descriptionPrefix=_descriptionPrefix;
@property(readonly, nonatomic) _Bool avoidShortDescription; // @synthesize avoidShortDescription=_avoidShortDescription;
@property(readonly, nonatomic) _Bool redact; // @synthesize redact=_redact;
@property(nonatomic) _Bool printAsDictionary; // @synthesize printAsDictionary=_printAsDictionary;
- (id)unorderedDictionary;	// IMP=0x00000000002012d1
- (id)_dictionaryDescription:(id)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x0000000000201250
- (id)_arrayDescription:(id)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x0000000000201133
- (id)_propertyDescriptionForProperty:(id)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x0000000000200eed
- (void)addFlagsForKey:(id)arg1 flagsAndConditions:(id)arg2;	// IMP=0x0000000000200db0
- (void)_addProperty:(id)arg1 value:(id)arg2 shouldRedact:(_Bool)arg3;	// IMP=0x0000000000200ce6
- (void)addPropertyIfExists:(id)arg1 value:(id)arg2 shouldRedact:(_Bool)arg3;	// IMP=0x0000000000200cc9
- (void)addProperty:(id)arg1 value:(id)arg2 shouldRedact:(_Bool)arg3;	// IMP=0x0000000000200cb7
- (id)description;	// IMP=0x0000000000200af0
- (id)initWithObject:(id)arg1 redact:(_Bool)arg2 avoidShortDescription:(_Bool)arg3;	// IMP=0x00000000002009b6
- (id)initWithObject:(id)arg1 redact:(_Bool)arg2;	// IMP=0x00000000002009a1

@end
