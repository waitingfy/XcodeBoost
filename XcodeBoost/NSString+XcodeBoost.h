//
//  NSString+XcodeBoost.h
//  XcodeBoost
//
//  Created by Michaël Fortin on 2014-03-19.
//  Copyright (c) 2014 Michaël Fortin. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSString (XcodeBoost)

#pragma mark Creating Instances

- (NSAttributedString *)xb_attributedString;
- (NSString *)xb_concatenatedStringForRanges:(NSArray *)ranges;

#pragma mark Checks

- (BOOL)xb_containsOnlyWhitespace;

#pragma mark Ranges

- (NSRange)xb_range;
- (NSArray *)xb_lineRangesForRanges:(NSArray *)ranges;
- (NSArray *)xb_rangesOfString:(NSString *)string;
- (NSArray *)xb_rangesOfSymbol:(NSString *)symbol;

#pragma mark Code Patterns - Subroutines

- (BOOL)xb_startsWithSubroutineDefinition;
- (NSString *)xb_extractSubroutineDeclarations;
- (NSArray *)xb_subroutineDefinitionRanges;
- (NSArray *)xb_subroutineSignatureRanges;

#pragma mark Code Patterns - Methods

- (BOOL)xb_startsWithMethodDefinition;
- (NSString *)xb_extractMethodDeclarations;
- (NSArray *)xb_methodDefinitionRanges;
- (NSArray *)xb_methodSignatureRanges;

#pragma mark Code Patterns - Functions

- (BOOL)xb_startsWithFunctionDefinition;
- (NSString *)xb_extractFunctionDeclarations;
- (NSArray *)xb_functionDefinitionRanges;
- (NSArray *)xb_functionSignatureRanges;

#pragma mark Code Patterns - Other

- (NSArray *)xb_symbolRanges;
- (NSArray *)xb_commentRanges;
- (NSArray *)xb_stringRanges;

@end