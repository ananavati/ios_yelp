//
//  YelpBusiness.h
//  Yelp
//
//  Created by Arpan Nanavati on 3/22/14.
//  Copyright (c) 2014 codepath. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YelpBusiness : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *imageUrl;
@property (strong, nonatomic) NSString *ratingImageUrl;
@property (nonatomic, assign) NSInteger reviewsCount;
@property (strong, nonatomic) NSString *address;

- (NSString *) categoriesText;
- (YelpBusiness *)initWithDictionary: (NSDictionary *) business;

@end
