//
//  TGRBookCatalog.h
//  ReadingList
//
//  Created by guille on 27/08/13.
//  Copyright (c) 2013 Guillermo Gonzalez. All rights reserved.
//

@interface TGRBookCatalog : OVCClient

- (void)searchBooksWithTerm:(NSString *)term completionBlock:(void (^)(NSArray *results, NSError *error))block;

@end
