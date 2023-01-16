//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol LibraryQueryEvaluator;

@interface LibraryExpressionClassifier : NSObject
{
    id <LibraryQueryEvaluator> _evaluator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000048b36
- (id)_resultEnumeratorForKeyPath:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000048a76
- (id)_resultEnumeratorForComparisonPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004884f
- (id)resultEnumeratorForPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000487cd
- (id)initWithEvalulator:(id)arg1;	// IMP=0x0010000000048762

@end

